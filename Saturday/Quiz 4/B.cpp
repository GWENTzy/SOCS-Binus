#include<stdio.h>

int main()
{
	int T,i,a,b;

	scanf("%d",&T);
	for(i=1;i<=T;i++){
	scanf("%d %d",&a,&b);	
	
	int jaw = a;
	
	while(a>=b)
	{
		a -= b;
		jaw += 1;
		a += 1;
	}
	printf("Case #%d: %d\n",i,jaw);
}
	return 0;
}
