#include<stdio.h>

int main()
{
	
long long int T,N,F,m,n;
    scanf("%lld",&T);
    for(m=0; m<T; m++)
	{
     	scanf("%lld",&N);
     	long long int var1 = 0, var2 = 1, sum = 0;
     	for(n=1; n<=N; n++)
		{
     		if(n==1||n==2) F = var2;
     		else if(n>2)
			{
     			F= (var1%1000000009) + (var2%1000000009);
			}
     		var1 = var2;
     		var2 = F;
     		sum  = sum + (F%1000000009);
	 	}
	
	printf("Case #%lld: %lld\n", m+1, sum%1000000009);
	 
	}
	
	return 0;
	
}
