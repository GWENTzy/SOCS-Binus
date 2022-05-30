#include<stdio.h>
#include<string.h>

int main()
{
	char fib[500][1000];
	int T, N, i, j;
	scanf("%d", &T);
	for(i=1;i<=T;i++)
	{
		scanf("%d %s %s", &N, &fib[0], &fib[1]);
		for(j=2;j<=N;j++)
		{
			strcpy(fib[j],fib[j-1]);
			strcat(fib[j],fib[j-2]);
		}
    
		printf("Case #%d: %s\n", i, fib[N]);
	
	}
	
	return 0;
	
}
