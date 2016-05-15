#include <stdio.h>
void bublesort(int a[],int n);
int main(int argc, char *argv[])
{
	int a[9]={1,2,3,4,5,6,7,8,9};
		int i;
	bublesort(a,9);

	for(i=0;i<9;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

void bublesort(int a[],int n)
{
	int j,k;
	while(n>0)
	{
		for(j=1;j<n;j++)
		{
			if(a[j-1]<a[j])
			{
				k=a[j];a[j]=a[j-1];a[j-1]=k;
			}
		}
		n--;//完成一轮冒泡后，将需冒泡的数的数量-1，
	}		//直到没有需要冒泡的，即n=0，退出循环  
}
