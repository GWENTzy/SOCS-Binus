#include<stdio.h>
#include<string.h>

//Untuk menyimpan data inputan
struct data
{
    char name[10001];
    char dob[10001];
    long long int bought;
};

struct open
{
    char today[10001];
};

int main()
{
//Deklarasi var sesuai tipe data
    int t,n,m,q;
    int h,i,j;
	scanf("%d", &t);
//Untuk perulangan input
    for(h=0; h<t; h++)
    {
        scanf("%d %d", &n, &m);
        struct data customer[n];
        for(i=0; i<n; i++)
        {
            scanf("%s %s %lld", &customer[i].name, &customer[i].dob, &customer[i].bought);
        }
        scanf("%d", &q);
        struct open date[q];
        
//Untuk perulangan output
        for(j=0; j<q; j++)
        {
            scanf("%s", &date[j].today);
        }
        printf("Case #%d:\n",h+1);
        for(j=0; j<q; j++)
        {
            int flag = 0;
            for(i=0; i<n; i++)
            {
                if((strcmp(date[j].today,customer[i].dob) == 0) && (customer[i].bought >= m))
                {
                    flag = 1;
                    printf("%s\n",customer[i].name);
                }
            }
            if(flag == 0)
            {
                printf("No one\n");
            }
        }
    }
    
    return (0);
    
}
