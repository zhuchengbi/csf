#include <stdio.h>
int length(char *s);                   //���峤�Ⱥ���
int main()
{
    char str[20], *p=str;
    printf("Please enter string: ");   //�����ַ���
    gets(p);
    printf("The string length is %d\n", length(p));    //���ó��Ⱥ���������ַ�������
    return 0;
}
//���Ⱥ���
int length(char *s)
{
    for (int i=0; *s++; i++);
    return i;
}