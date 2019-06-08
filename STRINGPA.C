void main()
{
 char str[30]={0};
 int len,i,j,flag;
 clrscr();
 printf("enter the string to check\n");
 gets(str);
 for(len=0;str[len]!='\0';len++);
 for(i=0,j=len-1;i<len/2;i++,j--)
 {
       if(str[i]==str[j])
	  flag=1;
       else
       {
	  flag=0;
	  break;
       }
 }
       if(flag==1)
       {
	  printf("%s is a palindrome  ",str);
       }
       else
       {
	  printf("%s is not a aplindrome",str);
       }
    getch();

}
