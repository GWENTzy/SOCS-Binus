#include<stdio.h>
#include<string.h>

int i,j,k;

struct a
{
	long long int nilai_pelajaran;
    char mata_pelajaran[100];
};

void bubbleSort(struct a arr[], int n)
{
	struct a swap;
    for (i = 0; i < n - 1; i++)
	{
        for (j = 0; j < n - 1 - i; j++)
		{ 
            if (arr[j].nilai_pelajaran > arr[j + 1].nilai_pelajaran)
			{
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
            
            else if(arr[j].nilai_pelajaran == arr[j+1].nilai_pelajaran && strcmp(arr[j].mata_pelajaran, arr[j+1].mata_pelajaran)>0)
			{
            	swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
			}
        }
    }
}

int main()
{
	struct a arr[100];
	int T;
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		scanf("%s %lld", &arr[i].mata_pelajaran, &arr[i].nilai_pelajaran);
		
	}
	
	bubbleSort(arr, T);
	
	for(i=0;i<T;i++)
	{
		printf("%s\n", arr[i].mata_pelajaran);
	}
	
	return 0;
	
}
