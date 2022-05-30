#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    
    char line[101][101];
    long long counter = 0;
    int a = 0;
    
    while(!feof(fp))
    {
        fscanf(fp, "%[^\n]\n", &line[a]);
        
        for(int j=0; j<strlen(line[a]); j++)
        {
            if(line[a][j] == ';' && j == 0)
            {
                counter++;
            }
            if(line[a][j] == ';' && line[a][j+1] == ';' && j+1<strlen(line[a]))
            {
                counter++;
            }
        }
        a++;
    }
    long long int num = 1;
    
    for(int i=0; i<counter; i++)
    {
        num = num * 101;
        num %= 1000000007;
    }
    printf("%lld\n", num%1000000007);
    
    
    return 0;
}
