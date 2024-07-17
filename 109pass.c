//program to read user name and password
# include <stdio.h>
main()
{
    char name[30],pass[15];
    int i;

    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter Password : ");
    scanf("%s",&pass);

    system("cls");

    printf("Your name is : ");

    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    printf("\nPassword : ");
    for(i=0;pass[i]!='\0';i++)
    {
        pass[i]='*';
        printf("%c",pass[i]);
    }
    printf("\n");
}
