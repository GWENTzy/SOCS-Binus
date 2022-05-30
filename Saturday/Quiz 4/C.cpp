#include <stdio.h>

int main ()
{
	int T;
	long long int N, K;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%lld %lld", &N, &K);
		long long int temp=K;
		int ctr=0;
		while(temp<=N)
		{
			temp*=K;
			ctr++;
		}
		printf("Case #%d: %d\n", i+1, ctr);
	}
	return 0;
}
