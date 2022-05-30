#include <stdio.h>

int main()
{
	int A,i,x;
	A=0; 
	x=0;
	scanf("%d",&A);
	int B[A],C[A];
	for(i=0; i<A; i++)
	{
		scanf("%d",&C[i]);
	}
	for(i=0; i<A; i++)
	{
		scanf("%d",&B[C[i]]);
	}
	for(i=0; i<A; i++)
	{
		if(i != A-1)
		{
			printf("%d ",B[i]);
		}
		else {
			printf("%d\n",B[i]);
		}
	}
	return 0;
}
	

