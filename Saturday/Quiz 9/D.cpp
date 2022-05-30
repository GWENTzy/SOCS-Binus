#include<stdio.h>
#include<string.h>

//Untuk menyimpan data inputan
struct NAME
{
	char name1[100];
	char name2[100];
};

int main()
{
//Mendeklarasi var
	int h,i,j;
	struct NAME S[2000];
//Untuk pengulangan input
	scanf("%d", &h);
	for(i=0;i<h;i++)
	{
		scanf("%s %s", &S[i].name1, &S[i].name2);
		int list = 1;
//Untuk pengulangan output
		for(j=0;j<i;j++)
		{
			if(strcmp(S[i].name1, S[j].name1)==0 && strcmp(S[i].name2, S[j].name2)==0)
			{
				list++;	     
			}		  
		}
		printf("%s%s%04d\n", S[i].name1, S[i].name2, list);
		
	}
	
	return 0;
	
}
