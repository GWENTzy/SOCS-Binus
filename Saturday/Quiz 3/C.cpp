#include <stdio.h>

int main()
{
	double A, B, C, D;
	scanf("%lf %lf %lf", &A, &B, &C);
	D = (-C/A);
	printf("%.2lf\n", D);
	
	return 0;
}
