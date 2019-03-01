#include<stdio.h>
void main()
{
    char str1[30]={0};
    int i;
    printf("please give your string to check");
    gets(str1);
    printf("your string is");

    for(i=0;str1[i]!='\0';i++)
    printf("%s",str1[i]);




}