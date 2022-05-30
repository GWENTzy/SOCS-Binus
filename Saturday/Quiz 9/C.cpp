#include<stdio.h>
#include<string.h>

//Untuk menyimpan data inputan
struct pelajaran
{
	char code[15];
	char day[15];
	int time;
}lesson[1002];

int main()
{
//Mendeklarasi var
	int i,j,n,t,temp;
	int temptime;
	
//Untuk pengulangan input
	scanf("%d", &t); getchar();
	for(i=0;i<t;i++)
	{
		scanf("%s %s %d", &lesson[i].code, &lesson[i].day, &lesson[i].time); getchar();
 	}
	scanf("%d", &n); getchar();
	
//Untuk pengulangan output
	for(j=0;j<n;j++)
	{
		scanf("%d",&temp); getchar();
		temp--;
		printf("Query #%d:\n",j+1);
		printf("Code: %s\n",lesson[temp].code);
		printf("Day: %s\n",lesson[temp].day);
		printf("Time: %02d:00\n",lesson[temp].time);
 	}
 	
	 return 0;

}
