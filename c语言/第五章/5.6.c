#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{ int i;
  double S=0,t=1;
   for(i=1;i<=20;i++)
   
     {
	 t=t*i;
   
   S=S+t;}
   printf("从1到20的阶乘和等于%.0f",S);

 
 

       

   
  
  return 0;
}
