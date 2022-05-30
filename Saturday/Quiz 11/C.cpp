#include<stdio.h>
#include<string.h>

int main()
{
	int h, i, j;
	int N, T;
	char nama_tersangka[200][200], list[200];
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&N);
		for(j=0;j<N;j++)
		{
			scanf("%s", &nama_tersangka[j]);
		}
		for(j=0;j<N-1;j++)
		{
			for(h=0;h<N-1-j;h++)
			{
				if(strcmp(nama_tersangka[h], nama_tersangka[h+1])>0)
				{
					strcpy(list, nama_tersangka[h]);
					strcpy(nama_tersangka[h], nama_tersangka[h+1]);
					strcpy(nama_tersangka[h+1], list);
				}
			}
		}
		
		printf("Case #%d: ", i+1);
		int ctr = 1;
		for(j=0;j<N-1;j++)
		{
			if(strcmp(nama_tersangka[j], nama_tersangka[j+1]) != 0) ctr++;
		}
		printf("%d\n", ctr);
		
}

	return 0;
	
}
