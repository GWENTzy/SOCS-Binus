#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M, N;
	FILE*fptr;
	fptr=fopen("testdata.in","r");
	fscanf(fptr, "%d" "%d", &M, &N);
	printf("%d\n", M+N);
	fclose(fptr);
	
	return 0;
	
}
