//program to read a string and copy the string vowels in upper case and consonants in lowercase
# include <stdio.h>
# include <string.h>
main()
{
    char str[100],str1[100];
    int i;

    printf("Enter a string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            str[i] = str[i] - 32;
        str1[i] = str[i];
    }

    puts(str1);
}
