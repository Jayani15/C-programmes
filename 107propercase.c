//program to convert the inputted string into proper case
# include <stdio.h>
main()
{
    char str[100];
    int i;

    printf("Enter a string : ");
    gets(str);

    if(str[0]>=65 && str[0]<=90)
        printf("%c",str[0]);
    else
    {
        if(str[0]>=97 && str[0]<=122)
            printf("%c",str[0]-32);
    }

    for(i=1;str[i]!=0;i++)
    {
        if(str[i]==' ')
        {
            printf("%c",str[i]);
            i++;
            if(str[i]>=65 && str[i]<=90)
                printf("%c",str[i]);
            else
            {
                if(str[i]>=97 && str[i]<=122)
                    printf("%c",str[i]-32);
            }
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)
                printf("%c",str[i]);
            else
            {
                if(str[i]>=65 && str[i]<=90)
                    printf("%c",str[i]+32);
            }
        }
    }
    printf("\n");
}
