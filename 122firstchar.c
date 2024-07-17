//program to read a string and count the first character of the string in the inputted string
# include <stdio.h>
main()
{
    char str[100],first[30];
    int i,j;

    printf("Input a string : ");
    gets(str);

    for(i=0;str[i]!=' ';i++)
    {
        first[i] = str[i];
    }

    printf("The first word of the inputed string is \"%s\" of length %d",first,i);
}
