//program to read a name and display "success message"
# include <stdio.h>
main()
{
    char name[50];
    int len=0;

    printf("Enter a name : ");
    scanf("%s",&name);

    while(name[len]!='\0')
        len++;

    if(len<5)
    {
        printf("\nName should be minimum of 5 characters..");
        exit(0);
    }

    printf("\n%s,..you are succeeded..\n",name);
}
