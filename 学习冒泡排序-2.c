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
		n--;//���һ��ð�ݺ󣬽���ð�ݵ���������-1��
	}		//ֱ��û����Ҫð�ݵģ���n=0���˳�ѭ��  
}
