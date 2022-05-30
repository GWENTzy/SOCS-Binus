#include <stdio.h>

int main()
{
	double A, B, C, D, E, F, G, H, I, J, K, L;
	
	scanf("%lf %lf", &A, &B);
	I = (100/(100-A)*B);
	scanf("%lf %lf", &C, &D);
	J = (100/(100-C)*D);
	scanf("%lf %lf", &E, &F);
	K = (100/(100-E)*F);
	scanf("%lf %lf", &G, &H);
	L = (100/(100-G)*H);
	
	
	printf("$%.2lf\n", I);
	printf("$%.2lf\n", J);
	printf("$%.2lf\n", K);
	printf("$%.2lf\n", L);
	
	return 0;
}
