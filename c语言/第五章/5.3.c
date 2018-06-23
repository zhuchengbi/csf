#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int m,n,x,y,b;
	printf("请输入m的值：");
	scanf("%d",&m);
	printf("请输入n的值：");
	scanf("%d",&n);
	 x=(m>n?m:n);
	while(x%n!=0||x%m!=0)
	{
		x=x+1;
	 } 
	 y=(m>n?n:m);
	 while(n%y!=0||m%y!=0)
	 {
	 	y=y-1;
	 }
	printf("m和n的最小公倍数是%d\n",x);
 	printf("m和n的最大公约数是%d",y);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	return 0;
}
