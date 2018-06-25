#include<stdio.h>
#include<string.h>

void CountUniqueCharacters(char* str){
	int appears;
        int i,j;
	for ( i = 0; i < strlen(str); i++){
		for ( j = 0; j < i; j++){
			if (str[j] == str[i]){
				appears = 1;
				break;
			}
		}
	}
	if (appears==1){
		printf("Non unique");
	}else{
		printf("Unique");
	}
}

int main(void)
{
          char *source[50];
          printf("Enter your name: ");
          scanf("%s",source);
 	  CountUniqueCharacters(source);
	return 0;
}
