//program to read a name and copy all vowels in one string and consonants in one string
# include <stdio.h>
# include <string.h>
main()
{
    char name[100],v[40],c[60];
    int i,vi=0,ci=0;

    printf("Enter your name/string : ");
    gets(name);

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i]<=90)
            name[i] = name[i] + 32;
    }

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]== 'a' || name[i]== 'e' || name[i]== 'i' || name[i]== 'o' || name[i]== 'u')
        {
            v[vi]=name[i];
            vi++;
        }
        else
        {
            c[ci]=name[i];
            ci++;
        }
    }
    v[vi]='\0';
    c[ci]='\0';

    printf("\nThe Vowels in the string %s are : \n",name);

    for(i=0;v[i]!='\0';i++)
        printf("%c\t",v[i]);

    printf("\n\nThe Consonants in the string %s are : \n",name);

    for(i=0;c[i]!='\0';i++)
        printf("%c\t",c[i]);

    printf("\n");
}
