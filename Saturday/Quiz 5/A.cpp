#include<stdio.h>

int main()
{
	int A;
	long long int i,j,B;
	scanf("%d",&A);
	
	for(i=0;i<A;i++)
	{
		scanf("%lld",&B);
		long long int num[200001],mod=1,max=0,temp;
	for(j=0;j<200001;j++)
	{
	num[j]=0;	
	}
	for(j=0;j<B;j++)
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
	    
		printf("Case #%d: %lld\n",i+1,mod);
		int flag=0;
		for(j=0;j<max;j++)
		{
			if(num[j]==mod)
			{
                if(flag == 0)
				{
                printf("%lld",j+1);
                flag = 1;
            }
                else{
                printf(" %lld",j+1);
            }
			}
		}
		printf("\n");
	}
	return 0;
}
