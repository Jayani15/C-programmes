//program to read a name and print length many number of times along with serial number
# include <stdio.h>
main()
{
    char name[20];
    int i;

    printf("Enter your name : ");
    scanf("%s",&name);

    for(i=0;name[i]!='\0';i++)
    {
        printf("%d-%s\n",i+1,name);
    }
}
