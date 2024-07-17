//program to read a password and check its strength
# include <stdio.h>
main()
{
    char pass[30];
    int i,len,uc,lc,dc,sc;
    i=len=uc=lc=dc=sc=0;

    printf("Enter Your Password : ");
    gets(pass);

    len=strlen(pass);

    if(len<8)
        printf("Password should at least contain 8 characters..");

    for(i=0;i<len;i++)
    {
        if(pass[i]>65 && pass[i]<90)
            uc++;
        else
            if(pass[i]>=97 && pass[i]<=122)
               lc++;
            else
                if(pass[i]>=48 && pass[i]<=57)
                   dc++;
                else
                    sc++;
    }

    if(lc>0 && uc>0 && dc>0 && sc>0)
        printf("\nStrength of your Password is Very Strong!!..");
    else
        if(lc>0 && uc>0 && (dc>0 || sc>0))
          printf("\nStrength of your Password is Strong!..");
        else
            if(lc>0 && (uc>0 || dc>0 || sc>0))
                printf("\nStrength of your Password is Medium..");
            else
                printf("\nStrength of your Password is Weak..");
}
