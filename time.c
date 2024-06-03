//program to convert minutes into hours and minutes
#include <stdio.h>

int tot,hr,min;

main()
{
    printf("Total time taken to travel from Hyderabad to Singapore in minutes : ");
    scanf("%d",&tot);
    
    hr = tot/60;
    min = tot%60;
    
    printf("Time taken to reach Singapore from Hyderabad is %dhours and %dminutes",hr,min);
    
}
