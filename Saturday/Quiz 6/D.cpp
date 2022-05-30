#include<stdio.h>
#include<string.h>

int main()
{
 	long long int A,B;
 	scanf("%lld",&A);
 	
 	for(B=1;B<=A;B++)
	{
 	
	long long int X,Y;
  	char angka[1000];
 	scanf("%lld",&X);
  	scanf("%s[^\n]",angka);
  	Y=strlen(angka);
    printf("Case #%lld: ",B);
    
	if(angka[Y-2]=='1')
		{
      		printf("%sth\n",angka);
  		}
     
	 	else if(angka[Y-1]=='1')
		{
           	printf("%sst\n",angka);
		}
  	
	  	else if(angka[Y-1]=='2')
		{
           	printf("%snd\n",angka);
  		}
  		
		  else if(angka[Y-1]=='3')
		{
          	printf("%srd\n",angka);
  		}
  		
  		else{
   			printf("%sth\n",angka);
  		}
 	}
 	return 0;
 	
}
