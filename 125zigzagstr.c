//declare a string and assign "Happy Programming" and display it in zigzag case : HaPpY PrOgRaMmInG
# include <stdio.h>
main()
{
    char str[] = "Happy Programming";
    int i;

    for(i=0;str[i]!='\0';)
    {
        if(str[i]==' ')
            printf("%c",str[i]);

        if(str[i]>=65 && str[i]<=90)
            printf("%c",str[i]);
        else
            if(str[i]>=97 && str[i]<=122)
                printf("%c",str[i]-32);
        i++;

        if(str[i]==' ')
            printf("%c",str[i]);

        if(str[i]>=65 && str[i]<=90)
            printf("%c",str[i]+32);
        else
            if(str[i]>=97 && str[i]<=122)
                printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
