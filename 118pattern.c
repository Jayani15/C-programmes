//program to print a pattern
# include <stdio.h>
main()
{
    char name[100];
    int i,j;

    printf("Enter your name : ");
    scanf("%s",&name);

    for(i=0;name[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c\t",name[j]);
        }
        printf("\n");
    }
}
