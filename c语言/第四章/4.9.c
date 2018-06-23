#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
    scanf("%d",&x);
    if(x>=10000&& x<=99999)
    {
	printf("5\n");
	printf("个位%d,十位%d,百位%d,千位%d,万位%d\n",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 );
	printf("逆序为%d%d%d%d%d",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 ) ;}
	 if(x>=1000&& x<=9999)
	 {
	printf("4\n");
	printf("个位%d,十位%d,百位%d,千位%d,万位%d\n",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 );
	printf("逆序为%d%d%d%d",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000);}
	 if(x>=100&& x<=999)
	 {
	printf("3\n");
		printf("个位%d,十位%d,百位%d,千位%d,万位%d\n",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 );
	printf("逆序为%d%d%d",x%10,(x%100)/10,(x%1000)/100);}
	 if(x>=10&& x<=99)
	 {
	printf("2\n");
		printf("个位%d,十位%d,百位%d,千位%d,万位%d\n",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 );
	printf("逆序为%d%d",x%10,(x%100)/10);}
	if(x>=1&& x<=9)
	 {
	printf("1\n");
	printf("个位%d,十位%d,百位%d,千位%d,万位%d\n",x%10,(x%100)/10,(x%1000)/100 ,(x%10000)/1000 ,x/10000 );
	printf("逆序为%d",x%10);}

    
	
	return 0;
}