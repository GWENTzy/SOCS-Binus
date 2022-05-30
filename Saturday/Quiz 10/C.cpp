#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp = fopen ("testdata.in","r");
    char A = '1';
    int N, M, ctr, total, i;
    fscanf(fp,"%d %d\n", &N, &M);
    ctr = 0;
    total = 0;
    for(i=0;i<N;i++)
	{
        fscanf(fp,"%c",&A);
        if(A=='1') ctr++;
        if(A=='0'|| i==N-1)
		{
            if(ctr>=M) total++;
            ctr=0;
        }
    }
    
    printf("%d\n", total);
    fclose(fp);
    
    return 0;
    
}

