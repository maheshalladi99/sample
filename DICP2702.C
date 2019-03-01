#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50]={0},dup[10][50]={0};
	int i,a,j=0,k=0,b,c,flag;
	clrscr();
	printf("enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			dup[j][k++]=str[i];
		}
		else
		{
			j++;
			k=0;
		}
	}
		printf("separate array is\n");
	for(i=0;i<=j;i++)
	{
		printf("%s\n",dup[i]);
	}

		dup[a][10]=dup[i][0];
	for(i=0,k=0;i<=j;)
	{
	      if(dup[a][k]>dup[i++][k])
	      {
	       //	flag=1;
		//dup[b][10]=dup[i++][k];
		printf("%s",dup[a][k]);
	      }
	      else
	      {
	       //	flag=0;
		//up[c][10]=dup[a][k];
		printf("%s",dup[i++][k]);
	      }
			if(flag==1)
			{
			dup[a][10]=dup[b][10];
			a++;
			printf("%s",dup[a][10]);
			}
			else
			{
			printf("%s",dup[c][10]);
			}
	}
getch();
}