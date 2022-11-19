#include<stdio.h>

int Summ(int array[])//定义一个函数 
{
	int Sum =0;//初始化Sum edddd
	for(int i =0;i<10;i++)
	{
		Sum=Sum+array[i];
	}
	return Sum;
 } 

int main()
{
	int a[10]={1,3,4,5,55,43,54,23,67,43};
	
	printf("The Sum is: %d",Summ(a));
	return 0; 
 } 
