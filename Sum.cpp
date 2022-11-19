#include<stdio.h>
int main()
{
	int a[10]={1,3,4,5,55,43,54,23,67,43};
	int Sum=0;
	for(int i=0;i<10;i++)
	{
		Sum=Sum+a[i];
	}
	
	printf("The Sum for the array is:%d",Sum);
	
	return 0;
 } 
