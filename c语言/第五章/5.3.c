#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int m,n,x,y,b;
	printf("������m��ֵ��");
	scanf("%d",&m);
	printf("������n��ֵ��");
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
	printf("m��n����С��������%d\n",x);
 	printf("m��n�����Լ����%d",y);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	return 0;
}
