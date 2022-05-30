#include<stdio.h>

int main()
{
	long long int A;
	long long int B,temp,j,i;
	scanf("%lld",&A);
		long long int v[A],max=0,max2=0;
		for(i=1;i<=A;i++)
		{
			scanf("%lld",&v[i]);
			if(v[i]>max)
			{
				max2=max;
				max=v[i];
			}
	        else if(v[i]>max2 && v[i]<max){
	        	max2=v[i];
			}	
		}	
		printf("%lld\n",max2);
		
	return 0;
}
