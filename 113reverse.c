//program to reverse the inputted string
# include <stdio.h>
main()
{
    char str[100],rev[100];
    int i,d=0;

    printf("Enter a string : ");
    gets(str);

    d=strlen(str);

    for(i=0;i<d;i++)
        rev[d-1-i] = str[i];

    rev[d]='\0';

    printf("\nThe Reversed form of %s is : ",str);

    for(i=0;rev[i]!='\0';i++)
    {
        printf("%c",rev[i]);
    }
    printf("\n");
}
