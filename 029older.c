//program to print who is older
#include<stdio.h>
main()
{
    char name1,name2;
    int age1,age2;
    age1=age2=0;

    printf("Enter the Name of 1st person : ");
    scanf("%s",&name1);
    printf("\nEnter the age of 1st person : ");
    scanf("%d",&age1);

    printf("\nEnter the Name of 2nd person : ");
    scanf("%s",&name2);
    printf("\nEnter the age of 2nd person : ");
    scanf("%d",&age2);

    if(age1>age2)
        printf("\n1%s is older",name1);
    else
        if(age2>age1)
            printf("\n%s is older",name2);
        else
            printf("\nBoth are of same age");

}
