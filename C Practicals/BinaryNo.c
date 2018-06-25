void bin(unsigned n)
{
	unsigned i;
	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i)? printf("1"): printf("0");
}

int main()
{
    int i;
	
	for(i=0; i<=100; i++)
	{
	    printf("Binary of %d is : ",i);
	    bin(i);
	    printf("\n");
	}
	return 0;
}
