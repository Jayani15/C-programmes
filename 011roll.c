//Program to read roll no. name ender and height of a person and display how many bytes of memory each variable occuppies
#include<stdio.h>
main()
{
    int roll;
    char gen,name[20];
    double height;

    printf("Enter Roll no. :");
    scanf("%d",&roll);

    printf("Enter Gender (M/F): ");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Name : ");
    fflush(stdin);
    scanf("%s",&name);

    printf("Enter Height : ");
    scanf("%lf",&height);

    printf("\nRoll no. occupies %d bytes of memory ",sizeof(roll));
    printf("\nGender occupies %d bytes of memory ",sizeof(gen));
    printf("\nName occupies %d bytes of memory ",sizeof(name));
    printf("\nHeight occupies %d bytes of memory ",sizeof(height));

}
