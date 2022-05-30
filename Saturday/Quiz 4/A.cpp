#include <stdio.h>

int main()
{
    char d,e,f;
    char varA,varB,varC;
    scanf("%c %c %c",&d,&e,&f);
   
    varA = d;
    varB = e;
    varC = f;
    d = 1;
    e = 2;
    f = 3;
    
	int min = varA;
    int max = varA;
    if(varB<min)
	{
        min = varB;
    }
    if(varC<min)
	{
        min = varC;
    }
    if(varB>max)
	{
        max = varB;
    }
    if(varC>max)
	{1
        max = varC;
    }
    if(min==varA && max==varB) printf("%d %d %d\n",d,f,e);
    else if(min==varA && max==varC) printf("%d %d %d\n",d,e,f);
    else if(min==varB && max==varA) printf("%d %d %d\n",e,f,d);
    else if(min==varB && max==varC) printf("%d %d %d\n",e,d,f);
    else if(min==varC && max==varA) printf("%d %d %d\n",f,e,d);
    else if(min==varC && max==varB) printf("%d %d %d\n",f,d,e);
    
    return 0;
}
