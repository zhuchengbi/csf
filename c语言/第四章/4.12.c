#include <stdio.h>
int main()
{
	int a,b,c,d,t;
	printf("������һ������:");
	scanf("%d",&a) ;
	printf("������һ������:");
	scanf("%d",&b) ;
    printf("������һ������:");
	scanf("%d",&c) ;
	printf("������һ������:");
	scanf("%d",&d) ;
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
    if(a>c)
    {
  		t=a;
  		a=c;
  		c=t;
  	} 
    if(a>d)
    {
  		t=a;
  		a=d;
  		d=t;
  	} 
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(b>d)
	{
		t=b;
		b=d;
		d=t;
	}
	if(c>d)
	{
		t=c;
		c=d;
		d=t;	
	}
	printf("��С����Ϊ%d,%d,%d,%d",a,b,c,d);
	return 0;
}