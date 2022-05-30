#include<stdio.h>

int main () 
{
	int O, i;
	long long int N, j, jumlah, count;
	scanf("%d", &O);
	for (i=1;i<=O;i++) 
	{
	jumlah=1;
	count=0;
	scanf("%lld", &N);	
	j=2;
	while (j>1)
	 {
	if (N%j == 0)
	{
	N=N/j;
	count++;
	}
	else
	{
	jumlah=jumlah*(1+count); 
	j++;
	if(j*j>N)
	{
    j=N;
	}
	count = 0;
	}
	}
	printf("Case #%d: %lld\n", i, jumlah);
	}
	return 0;
}
