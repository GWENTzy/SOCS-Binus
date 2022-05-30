#include<stdio.h>

int print (int i, int j, int N)
{
	if(j==1)
	{
		for(i=0; i<N-j; i++) printf(" ");
		printf("*\n");
	}
	
	else
	{
		print(i, j-1, N);
		for(i=0; i<N-j; i++) printf(" ");
		for(i=0; i<2*j-1; i++) printf("*");
		puts("");
		print(i, j-1, N);
	}
}

int main()
{
	long long int i, j, N;
	scanf("%lld", &N);
	j = N;
	print(i, j, N);
	
	return 0;
	
}
