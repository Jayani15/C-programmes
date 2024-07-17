//program to validate email id
# include <stdio.h>
main()
{
    char mail[100],must1,must2;
    int i,j,before1=0,before2=0,found=0;

    printf("Enter your mail id : ");
    scanf("%s",&mail);

    for(i=0;mail[i]!='\0';i++)
    {
        if(mail[i]=='@')
        {
            found=1;
            must1=i;
            for(j=i;j>=0;j--)
                before1++;
        }
        if(mail[i]=='.')
        {
            found=2;
            must2=i;
            for(j=i;mail[j]!='@';j--)
              before2++;
        }
    }

    if(must1>must2 || found<2 || before1<3 || before2<3)
    {
        printf("\nYour email is invalid..pls check\n");
        exit(0);
    }

    printf("\nYour email id is validated successfully..\n");
}
