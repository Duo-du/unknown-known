#include <stdio.h>
void bublesort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)//��ʾһ����n����Ҫ����ð������ 
	{
		for(j=1;j<n-i;j++)//n-i��ʾֻ��ǰn-i������Ҫ����ð������ 
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