#include<stdio.h>
int main()
{
	int T;
	long long int i,j,n;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&n);
		long long int num[200001],mod=1,max=0,temp;
	for(j=0;j<200001;j++)
	{
	num[j]=0;	
	}
	for(j=0;j<n;j++)
	{
		scanf("%lld",&temp);
		num[temp-1]+=1;
		if(max<temp)
		{
		max=temp;
		}
	}
	for(j=0;j<max;j++)
	{
		if(mod<num[j])
		{
		mod=num[j];	
		}
	}
	    
		printf("Case #%d: ",i+1,mod);
		long long int sum=0;
		for(j=0;j<=max;j++)
		{
			if(num[j]==mod)
			{
				sum=sum+j+1;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
