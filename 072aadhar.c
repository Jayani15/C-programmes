//program to check if the inputted aadhar no is valid or not
#include<stdio.h>
main()
{
    char name[20];
    long long int aadhar,no;
    int count;

    printf("Enter Your Name : ");
    scanf("%[^\n]",&name);
    printf("Enter Your aadhar number : ");
    scanf("%lld",&aadhar);

    no = aadhar;

    while(aadhar!=0)
    {
        aadhar = aadhar/10;
        count++;
    }
    aadhar = no;
    if(count==12)
        printf("Heyy %s your Aadhar number %lld is valid successfully",name,aadhar);
    else
        printf("Heyy %s your Aadhar number %lld is Invalid ,kindly recheck ",name,aadhar);

    printf("\n");
}
