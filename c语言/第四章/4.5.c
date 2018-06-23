#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("请输入一个小于1000的正数:\n");
		scanf("%d",&a); 
	while(a>=1000&&a<0){
		printf("请重新输入：\n");
		scanf("%d",&a); 
		
	}
	if(a<1000)
	b=sqrt(a);
	printf("%d",b);
        return 0;
}
