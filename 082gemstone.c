//program to tell a persons lucky number based on their dob and display suitable gemstone
#include<stdio.h>
main()
{
    int dob,temp,sum,i,d;
    dob=sum=d=temp=0;

    printf("Enter your Date of Birth(In the format MMDDYYYY) : ");
    scanf("%d",&dob);

    for(i=1;i<=8;i++)
    {
        d=dob%10;
        temp=temp+d;
        dob=dob/10;
    }

    while(temp>=1)
    {
        d=temp%10;
        sum=sum+d;
        temp=temp/10;
    }

    printf("Your Lucky Number is : %d\n",sum);

    switch(sum)
    {
        case 1 : printf("Your Gemstone is Garnet"); break;
        case 2 : printf("Your Gemstone is Amethyst"); break;
        case 3 : printf("Your Gemstone is Aquamarine"); break;
        case 4 : printf("Your Gemstone is Diamond"); break;
        case 5 : printf("Your Gemstone is Emrald"); break;
        case 6 : printf("Your Gemstone is Pearl"); break;
        case 7 : printf("Your Gemstone is Ruby"); break;
        case 8 : printf("Your Gemstone is Saphire"); break;
        case 9 : printf("Your Gemstone is Blue Topaz"); break;
        default : printf("Not Given");
    }
}
