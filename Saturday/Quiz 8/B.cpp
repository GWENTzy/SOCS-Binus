#include<stdio.h>

long long int winner(long long int N,long long int back)
{
	if(N==1)return 1;
	else if(N%2==0) return 1+winner(N/2,back+1);
	else return 1+winner(N*3+1,back+1);

}
int main()
{
	long long int T, N, i, j, back;
	scanf("%d", &T);
	for(i=0;i<T;i++)
	{
		scanf("%d", &N);
		back=winner(N,1);
		back++;
		
		printf("Case #%d: ",i+1);
		if(back%2==0) printf("Lili\n");
		else printf("Jojo\n");
		
	}
	
	return 0;
	
}
