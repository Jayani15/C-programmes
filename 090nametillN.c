//program to read name of a person and display its length till user enters N
#include <stdio.h>
#include<string.h>
main()
{
    char name[20];
    int len;

    do
    {
        printf("Enter Your Name : ");
        scanf("%s",&name);
        len=strlen(name);

        if(name[len-1]=='\n')
        {
            name[len-1] = '\0';
        }

        printf("Length is %d\n",len);
    }while(name[0]!='N');
}
