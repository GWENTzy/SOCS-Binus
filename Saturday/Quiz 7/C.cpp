#include<stdio.h>

long long int F (long long int M,long long int N)
{
	if (N==0) return 0;
	else if (M==0) return 0;
	else return 2*M+3*N + F(M-1,N) + F(M,N-1);
}

int main()
{
	long long int M, N, T;
	scanf("%lld %lld", &M, &N);
	printf("%lld\n", F(M,N));
	
	return 0;
		
}
