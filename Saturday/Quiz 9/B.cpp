#include<stdio.h>

//Untuk menyimpan data inputan
struct student
{
	int list;
	int date;
	int month;
	int year;
	char student_name[250];
	char student_college[250];
};

int main()
{
//Deklarasi var sesuai tipe data
	struct student S[100];
	int h,i,j,k;
	scanf("%d", &h);
	
//Untuk perulangan input
	for(i=0;i<h;i++)
	{
		scanf("%d %d %d %d %s %s", &S[i].list, &S[i].date, &S[i].month, &S[i].year, &S[i].student_name, &S[i].student_college);
	}
	scanf("%d", &k);

//Untuk perulangan output
	int R[k];
	for(i=0;i<k;i++)
	{
		scanf("%d", &R[i]);
		for(j=0;j<h;j++)
		{
			if(R[i] == S[j].list)
			{
				printf("%d. %s was born on %d/%d/%d and live at %s\n", S[j].list, S[j].student_name, S[j].date, S[j].month, S[j].year, S[j].student_college);
				break;
			}
			else if(j==h-1)
			{
				printf("No data found!\n");
			}
		}
	}
	
	return 0;
	
}
