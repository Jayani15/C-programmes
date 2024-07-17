//program to generate user name from inputted maid id
# include <stdio.h>
main()
{
    char mail[100],name[100];
    int i;

    printf("Enter your mail id : ");
    gets(mail);

    for(i=0;mail[i]!=0;i++)
    {
        name[i]=mail[i];
        if(mail[i+1]=='@')
            break;
    }

    printf("\nYour user name is : %s\n",name);
}
