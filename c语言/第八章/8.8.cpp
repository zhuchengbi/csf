#include<stdio.h>
int main()
{int daxie=0,xiaoxie=0,kongge=0,shuzi=0,qita=0;
 char *p,a[80];
 gets(a);

 for(p=a;(*p)!='\0';p++)           //�����'\n'�ĳ�'\0'
{ if((*p)>='A'&&(*p)<='Z')daxie++;
   else if((*p)>='a'&&(*p)<='z')xiaoxie++;
        else  if((*p)==' ')kongge++;
              else  if((*p)>='0'&&(*p)<='9')shuzi++;
                    else qita++;
 }
 printf("���д�д��ĸ%d����Сд��ĸ%d�����ո�%d��������%d���������ַ�%d��\n",daxie,xiaoxie,kongge,shuzi,qita);
 return 0;
}