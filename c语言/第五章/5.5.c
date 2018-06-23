#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{ int n,a,i,Sn=0,t=0;
 
 printf("a=");
 scanf("%d",&a);
  printf("n=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)

 {  t=t*10+a; 
 Sn=Sn+t;

       
 }
 
   printf("Sn=%d",Sn) ;
   
  
  return 0;
}
