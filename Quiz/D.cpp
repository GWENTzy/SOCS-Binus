#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int letter = 0;
	char A[200];
	char B[200];
	gets(A);
	for(int i=0;i<strlen(A);i++)
	{
		if(islower(A[i]) != 0)
		B[letter++] = A[i];
	}

	for(int i=0;i<letter;i++)
	{
		for(int j=i+1;j<letter;j++)
		{
			if(B[i]>B[j])
			{
				char C;
				C = B[i];
				B[i] = B[j];
				B[j] = C;
			}
		}
	}
	
	for(int i=0;i<letter;i++)
	{
		if(i==letter-1)
		{
			printf("%c\n", B[i]);
		}
		else{
			printf("%c", B[i]);
		}
	}
	
	return 0;

}

//Sample
//Input = Hello , Jojo here from BinusOJ . com
//Output = ceeefhijllmmnooooorrsu
