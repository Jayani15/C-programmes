//program to read two passwords compare their lengths if lengths are equal then check for similarities
# include <stdio.h>
main()
{
    char pass1[30],pass2[30];
    int i,lp1,lp2;
    lp1=lp2=0;

    printf("Enter the first password : ");
    scanf("%s",&pass1);
    printf("Enter the second password : ");
    fflush(stdin);
    gets(pass2);

    for(i=0;pass1[i]!='\0';i++)
        lp1++;

    for(i=0;pass2[i]!='\0';i++)
        lp2++;

    if(lp1!=lp2)
    {
        printf("\nThe Length of Passwords are not Equal..\n");
        exit(0);
    }

    for(i=0;i<lp1;i++)
    {
        if(pass1[i]==pass2[i])
        {
            printf("\n%c is similar in both the passwords..\n",pass1[i]);
        }
    }
}
