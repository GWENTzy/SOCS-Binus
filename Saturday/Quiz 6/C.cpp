#include<stdio.h>
#include<math.h>

int main()
{
	long long int A,B,C,D,Total;
	scanf("%lld",&A);
	
	for(B=1;B<=A;B++)
	{
		scanf("%lld %lld",&C,&D);
		Total=pow(2,C*D);
		printf("Case #%lld: %lld\n",B,Total);
	}
	return 0;
	
}
