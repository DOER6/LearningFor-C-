#include<stdio.h>
int main()
{
	int a[10]={1,3,4,5,55,43,54,23,67,43};
	int Maximum=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>Maximum)
		{
			Maximum=a[i];
		}
	}
	
	printf("The Maximum for the array is:%d",Maximum);
	
	return 0;
 } 
