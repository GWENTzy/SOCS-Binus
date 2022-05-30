#include <stdio.h>

//membuat function
long long int f(long long int x)
{
	if(x>0){
		return f(x-1)+1; //jika x>0 maka function akan menjalankan f(x-1)+1
	}
	else if(x==0){
		return 0; //jika x=0 maka function akan menjalankan 0
	}
}

int main ()
{
	long long int A;
	scanf("%lld", &A);
	printf("%lld\n", f(A));
	
	return 0;
	
}

//Sample 1
//Input = 3
//Output = 3

//Sample 2
//Input = 0
//Output = 0
