#include<stdio.h>

int main()
{
	int T,i;
	scanf("%d",&T);
	int n[T];
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n[i]);	
	}
	
	for(i=1;i<=T;i++){
 
 if(n[i]%7==0 & n[i]%11==0)
  {
  printf("Case #%d: ElevenSeven\n",i);
  }
 else if(n[i]%7==0)
  {
  printf("Case #%d: Seven\n",i);
  }
 else if(n[i]%11==0)
  {
  printf("Case #%d: Eleven\n",i);
  }
 else
  {
  printf("Case #%d: %d\n",i,n[i]); 
  }
}
return 0;
 }
