#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{int i,j,a[3][3],n=0;
 
   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
     printf("输入第%d行%d列数.\n",i,j); 
     scanf("%d",&a[i][j]) ;
	 } 
  }
  for(i=0;i<=2;i++)
   n=n+a[i][i];
   for(j=0;j<=2;j++)
   n=n+a[j][2-j];
   n=n-a[1][1];
   
   printf("对角线元素之和为%d",n);
   
  
  return 0;
}
