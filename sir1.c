#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[100];
   int c = 0, count[26] = {0}, x,d=0,co=0,counter=0,j;
 
   printf("Enter a string\n");
  
   scanf("%s",string);
   while (string[c] != '\0') 
   {
         if (string[c] >= 'a' && string[c] <= 'z')
        {
         x = string[c] - 'a';
         
         count[x]++;
        }
 
      c++;
   }
 
   for (c = 0; count[c]!='\0'; c++)
   {
      // printf("%d ",count[c]);
      counter=0;
      for(j=2;j<=count[c];j++)
      {
         if(count[c]%j==0)

                 {
                  counter=1;

                       break;
                }
      }
      if(counter==0)

           {
               printf("%d ",count[c]);
               
           }
    
   }//printf("\n");
   
 //printf("%d %d",d);
   return 0;
}




























