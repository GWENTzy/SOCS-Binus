#include<stdio.h>
#include<string.h>

int h, i, j;

struct a
{
	int jumlah_nilai;
	char nama_siswa[20];
}arr[1005];

void merge(int l,int m,int r)
{
	int n1 = m+1-l;
	int n2 = r-m;
	struct a L[n1], R[n2];
	for(i=0;i<n1;i++) L[i] = arr[l+i];
	for(i=0;i<n2;i++) R[i] = arr[m+1+i];
	i=0, j=0, h=l;
	
	while(i<n1 && j<n2)
	{
		if(L[i].jumlah_nilai > R[j].jumlah_nilai)
		{
			arr[h] = L[i];
			i++;
		}
		
		else if(L[i].jumlah_nilai == R[j].jumlah_nilai && strcmp(L[i].nama_siswa,R[j].nama_siswa)<0)
		{
			arr[h] = L[i];
			i++;
		}
		
		else
		{
			arr[h] = R[j];
			j++;
		}
		h++;
	}
	while(i<n1)
	{
		arr[h] = L[i];
		i++;
		h++;
	}
	
	while(j<n2)
	{
		arr[h]=R[j];
		j++;
		h++;
	}
}

void sort(int l,int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		sort(l,m);
		sort(m+1,r);
		merge(l,m,r);
	}
}

int main()
{
	int T;
	scanf("%d", &T); 
	getchar();
	for(i=0;i<T;i++)
	{
		scanf("%s %d", &arr[i].nama_siswa, &arr[i].jumlah_nilai);
		getchar();
	}
	
	sort(0,T-1);
	int temp, posisi;
	for(i=0;i<T;i++)
	{
	if(i==0)posisi = 1;
	else if(arr[i].jumlah_nilai != arr[i-1].jumlah_nilai)posisi = i+1;
		printf("%d %s %d\n", posisi, arr[i].nama_siswa, arr[i].jumlah_nilai);
	}
	
	return 0;
	
}
