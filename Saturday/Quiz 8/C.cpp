#include<stdio.h>

int main()
{
	unsigned long long int T, N, i, j, jumlah;
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		scanf("%d", &T);
		if(T>=2)
		{
			unsigned long long int k[100000];
			jumlah = 0;
			
			for(j=1;j<=T;j++)
			{
				scanf("%llu", &k[j]);
				if(j%2==0)
				{
					jumlah+=k[j];
				}
			}
	
			printf("Case #%llu: %llu\n", i+1, jumlah);
		}	
	}
	
	return 0;

}
