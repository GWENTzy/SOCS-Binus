#include <stdio.h>


int main()
{
  int NUM;
  int A,B;
  int arr[10001];
  scanf("%d",&NUM);
  for(B=0;B<NUM;B++)
  {
    
	scanf("%d",&arr[B]);
    for(A=0; A<1; A++)
	{
      if(arr[B]==0)
	  {
        printf(".........");
      }else if(arr[B]==1)
	  {
        printf("#........");
      }else if(arr[B]==2)
	  {
        printf("##.......");
      }else if(arr[B]==3)
	  {
        printf("###......");
      }else if(arr[B]==4)
	  {
        printf("####.....");
      }else if(arr[B]==5)
	  {
        printf("#####....");
      }else if(arr[B]==6)
	  {
        printf("######...");
      }else if(arr[B]==7)
	  {
        printf("#######..");
      }else if(arr[B]==8
	  ){
        printf("########.");
      }else if(arr[B]==9)
	  {
        printf("#########");
      }
      printf("\n");
    }
  }
  return 0;
  
}
