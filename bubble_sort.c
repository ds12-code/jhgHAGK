#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int array[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(array[i]>array[j])
			{
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}
void display(int array[],int n)
{
	printf("Sorted Array : ");
	for(int i=0;i<=n-1;i++)
	{
		printf(" %d",array[i]);
	}
}
int main()
{
	int array[]={64,35,68,90,13};
	int n;
	n=sizeof(array)/sizeof(array[0]);
	bubble_sort(array,n);
	display(array,n);
}
