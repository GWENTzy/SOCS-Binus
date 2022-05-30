#include<stdio.h>

struct a
{
    char kota[2000];
    char temp;
    double s1, s2;
}; 

int main()
{
	FILE *fp = fopen("testdata.in","r");
	int i, j;
	int n = 0;
  
	struct a array[100];
  
	 while(!(feof(fp)))
  	{
		fscanf(fp,"%[^#]#%lf#%c\n", &array[n].kota, &array[n].s1, &array[n].temp);
    	if(array[n].temp=='C') array[n].s2 = array[n].s1;
    	else if(array[n].temp == 'F') array[n].s2 = 5*(array[n].s1-32)/9;
    	n++;
	}
 
	struct a swap;
  
	for (i = 0; i < n - 1; i++)
  	{
        for (j = 0; j < n - 1 - i; j++)
		{ 
        if (array[j].s2 > array[j + 1].s2)
		{
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
            
            if(array[j].s2 == array[j+1].s2 && strcmp(array[j].kota, array[j+1].kota)>0)
			{
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
      		}  
    	}
	}
    
    for(i=0;i<n;i++)
	{
    	printf("%s is %.2lf%c\n", array[i].kota, array[i].s1, array[i].temp);
  	}
	
	fclose(fp);
	
	return 0;
	
}
