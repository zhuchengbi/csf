#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{int i,j,min,temp,a[11];  
    printf("������ʮ����:\n");  
    for(i=1;i<=10;i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    printf("\n");  
         for(i=1;i<=9;i++)  
    {  
        min=i;  
        for(j=i+1;j<=10;j++)  
        {  
            if(a[min]>a[j])  
            {  
                min=j;  
            }  
        }  
       temp=a[i];  
       a[i]=a[min];  
       a[min]=temp;  
              
    }  
    printf("\n��С��������:\n");  
    for(i=1;i<=10;i++)  
        printf("%5d",a[i]);  
    printf("\n");  
    return 0;  
  
  return 0;
}
