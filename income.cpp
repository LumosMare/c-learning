#include<stdio.h> 

int main ()
{

int expense = 0;
    int income = 0;
	
	printf("请输入支出:");
	scanf("%d",&expense);
	
 
	income = 100-expense;
	
	
	printf("剩下%d元。\n",income) ;
	
	
	return 0;
} 

