#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int i = 0;
    long long int maksimal = -1, *a;
    long long int A, B;

    scanf("%lld %lld" , &A, &B);

    a = (long long int*)malloc( A*sizeof(long long int));
    for (i=0;i<A;i++)
	{
        scanf("%lld" , &a[i]);
        if (a[i]>maksimal)
        maksimal = a[i];
    }

    long long int R = 0;
    long long int S = maksimal-1;
    long long int U = 0 , mid;
    long long int V = 0;

    while(R<=S)
	{
        mid = (S+R)/2;
        U = 0;
        for (i=0;i<A;i++)
		{
            long long int count = a[i]-mid;
            U += (count>0?count:0);
        }

        if(V==B)
		{
            V = mid;
            break;
        }
        else if(U<B)
		{
            S = mid-1;
        }
        else{
            R = mid+1;
            if (mid>V)
            V = mid;
        }
    }
    
    printf("%lld\n" , V);

    return 0;
	 
}

//Sample 1
//Input =
// 7 10
//1 1 2 3 3 3 3
//Output =
// 0

//Sample 2
//Input =
//7 10
//2 2 2 3 3 3 3
//Ouput =
//1
