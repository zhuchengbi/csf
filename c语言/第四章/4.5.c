#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("������һ��С��1000������:\n");
		scanf("%d",&a); 
	while(a>=1000&&a<0){
		printf("���������룺\n");
		scanf("%d",&a); 
		
	}
	if(a<1000)
	b=sqrt(a);
	printf("%d",b);
        return 0;
}
