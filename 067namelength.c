//program to read a name and display length many times
#include<stdio.h>
#include<string.h>
main()
{
   int len,count;
   char name[10];

   len=count=0;

   printf("Enter a Name : ");
   scanf("%s",&name);

   len=strlen(name);

   for(count=1;count<=len;count++)
   {
       printf("\n%d.%s",count,name);
   }
   printf("\n");
}
