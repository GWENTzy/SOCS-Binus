#include <stdio.h>
#include <string.h>

int main()
{
    int h, i, N;
	scanf("%d", &N);
	getchar();
    char special_sentences[10][5] = {"","unu","du","tri","kvar","kvin","ses","sep","ok","nau"};

	for(i=0;i<N;i++)
	{
		int X;
		int count;
		scanf("%d", &count);
		printf("Case #%d:", i+1);
		X = count/1000%10;
		if(X!=0)
		{
			if(X!=1) printf(" %s", special_sentences[X]);
			printf(" mil");
		}
		
		X = count/100%10;
		if(X!=0)
		{
			if(X!=1) printf(" %s", special_sentences[X]);
			else printf(" ");
			printf("cent");
		}
		
		X = count/10%10;
		if(X!=0)
		{
			if(X!=1) printf(" %s", special_sentences[X]);
			else printf(" ");
			printf("dek");
		}
		
		X = count%10;
		if(X!=0)
		{
			printf(" %s", special_sentences[X]);
		}
		puts("");
	}
	
	return 0;
	
}

//Sample
//Input =
//10
//5
//10
//700
//1100
//2000
//2019
//2020
//6105
//7980
//9999
//Output =
//Case #1: kvin
//Case #2: dek
//Case #3: sepcent
//Case #4: mil cent
//Case #5: du mil
//Case #6: du mil dek nau
//Case #7: du mil dudek
//Case #8: ses mil cent kvin
//Case #9: sep mil naucent okdek
//Case #10: nau mil naucent naudek nau

