//program to print the second word from the inputted string
# include <stdio.h>
main()
{
    char str[100],sw[20];
    int i,j;

    printf("Enter a string : ");
    gets(str);

    printf("\nSecond word in the string is : ");

    for(i=0;str[i]!=0;i++)
    {
       if(str[i]==' ')
       {
           i++;
           for(j=i;str[j]!=' ';j++)
           {
               printf("%c",str[j]);
           }
           break;
       }
    }
}
