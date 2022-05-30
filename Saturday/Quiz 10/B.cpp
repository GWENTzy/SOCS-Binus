#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    int N,T,i,j,k,a=0;
    char nama1[100][100], pohon[100][100], nama2[100][100];
    FILE *ptr;
    ptr = fopen ("testdata.in","r");
    if (ptr==NULL)
	{
        printf("Error!");
        exit(1);
    }
    fscanf (ptr,"%d",&N);
    for (i=0; i<N; i++)
	{
        fscanf (ptr,"\n%[^#]",&nama1[i]);
        fscanf (ptr,"#%[^\n]",&pohon[i]);
    }
    fscanf(ptr,"%d",&T);
    for (j=0; j<T; j++)
	{
        fscanf(ptr,"\n%[^\n]",&nama2[j]);
        for (k=0; k<N; k++)
		{
            if (strcmp(nama1[k],nama2[j])==0)
			{
                printf ("Case #%d: %s\n", j+1, pohon[k]);
                break;
            }
            a+=1;
        }
        if (a==N)
		{
            printf("Case #%d: N/A\n",j+1);
        }
        a=0;
    }
    fclose(ptr);
    
    return 0;
    
}
