#include <stdio.h>
void bublesort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)//表示一共有n个数要进行冒泡排序 
	{
		for(j=1;j<n-i;j++)//n-i表示只对前n-i个数需要进行冒泡排序 
		{
			if(a[j-1]<a[j])
			{
				k=a[j];a[j]=a[j-1];a[j-1]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


int main(int argc, char *argv[])
{
	int a[9]={1,2,3,4,5,6,7,8,9};
	int i;
	bublesort(a,9);
	return 0;
}