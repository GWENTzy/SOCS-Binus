#include<stdio.h>

long long int F (long long int N)
{
	if (N==1) return 1;
	else if (N%2==0) return F(N/2);
	else if (N%2!=0) return F(N-1) + F(N+1);
}

int main()
{
	long long int i, j, N;
	scanf("%lld", &j);
	for(i=0; i<j; i++)
	{
		scanf("%lld",&N);
		printf("Case #%lld: %lld\n", i+1, F(N));
	}
	
	return 0;
	
}
