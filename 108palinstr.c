//program to check weather the inputted string is palindrome or not
# include <stdio.h>
# include <string.h>
main()
{
    int i=0,j=0,len;
    char str[20],rev[20],palin='y';

    printf("Enter a string to check weather it is a palindrome or not : ");
    scanf("%s",&str);

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    }

    for(i=0;i<len;i++)
    {
        rev[i] = str[len-1-i];
    }
    rev[len]='\0';

    printf("\nReversed string : %s\n",rev);

    for(i=0;i<len;i++)
    {
        if(str[i]!=rev[i])
        {
           palin='n';
           break;
        }
    }

    if(palin='y')
        printf("%s is a palindrome",str);
    else
        printf("%s is not a palindrome",str);
}
