//program to read full name gender and native place and display them
#include<stdio.h>

main()
{
    char name[30],gen,place[10];

    printf("Enter Your Full Name : ");
    scanf("%[^\n]",&name);

    printf("Enter Your Gender(M/F) : ");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Your Native Place : ");
    scanf("%s",&place);

    printf("%s-%c-%s",name,gen,place);
}
