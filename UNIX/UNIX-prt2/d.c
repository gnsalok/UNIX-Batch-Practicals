#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#ifndef BUFSIZ
#define BUFSIZ 1024
#endif
int copy(char* in, char *out, int op_f, int op_d)
{
        int fin =0, fout =0;
        if(( fin  = open(in, O_RDONLY) ) == -1 )
        {
                return 1;
        }
        if(op_d)
        {
                out = strcat(strcat(out ,"/" ), in);
        }
        if(( fout = open(out, O_WRONLY) ) == -1 )
        {
                if(( fout = creat(out, 0640) ) == -1 )
                {
                        close(fin);
                        return 2;
                }
        }
        else if(! op_f)
        {
                close(fin);
                return 3;
        }
        char buffer[BUFSIZ + 1] = {0};
        int n =0;
        while((n = read(fin, buffer, BUFSIZ)) > 0)
                write(fout, buffer, n);

        close(fin);
        close(fout);
        return 0;
}
int main(int argc, char *argv[])
{
        int f = 0, i = 0;
        for(i = 1; i < argc; i++)
        {
                if(! strcmp(argv[i], "-f"))
                         f++;
                else if(argv[i][0] == '-')
                {
                        fprintf(stderr, "%s: invalid option -- '%c'\n", argv[0], argv[i][1] );
                        return 0;
                }
        }
        if(argc < 3 + f)
        {
                fprintf(stderr, "%s: insufficient arguments.\n", argv[0]);
                return 0;
        }

        for(i = 1; argv[argc -i][0] == '-'; i++);

        char *output = argv[argc -i];
        int no_in = argc -f -1 -1;
        int d =0;
        if(( d = open(output, O_DIRECTORY)) < 0)
        {
                if(no_in > 1)
                {
                        char *err = (char*)malloc(strlen(argv[0] + 2 + strlen(output) + 1));
                        perror( strcat(strcat(strcpy(err, argv[0]), ": "), output) );
                        free(err);
                        exit(1);
                }
                d = 0;
        }
        else
                close(d);

        char *input[no_in] ;
        int j =0, idx = 0;
        for(j = 1; j < argc -i; j++)
        {
                if(argv[j][0] != '-')
                        input[idx++] = argv[j];
        }

        int len = strlen(output);
        if(output[len-1] == '/')
                output[--len] = 0;
        char *err = NULL;
        for(i =0; i<idx; i++)
        {
                switch(copy(input[i], output, f, d))
                {
                        case 1:
                                err = (char*)malloc(strlen(argv[0] + 2 + strlen(input[i]) + 1));
                                perror( strcat(strcat(strcpy(err,argv[0]), ": "), input[i]) );
                                free(err);
                                break;
                        case 2:
                                err = (char*)malloc(strlen(argv[0] + 2 + strlen(output) + 1));
                                perror( strcat(strcat(strcpy(err, argv[0]), ": "), output) );
                                free(err);
                                break;
                        case 3:
                                fprintf(stderr, "%s: %s: can`t overwrite -- use `-f' option to overwrite\n", argv[0], output);
                                break;
                }
                strcpy(output + len, "");
        }
        return 0;
}
