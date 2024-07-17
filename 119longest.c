//program to read 10 names and display the longest name along with its length and position
# include <stdio.h>
# include <string.h>
main()
{
    char names[10][50],longest[50];
    int i,j,current;
    int longest_length=0;
    int position=0;

    for(i=0;i<10;i++)
    {
        printf("Enter a name : ");
        scanf("%s",names[i]);
    }

    for(i=0;i<10;i++)
    {
        current=strlen(names[i]);
            if(current>longest_length)
            {
                for(j=0;j<current;j++)
                {
                    longest[j] = names[i][j];
                }
                longest_length=current;
                position=i+1;
            }

    }

    printf("\n\n%s is the longest name with %d letters at %d position\n",longest,longest_length,position);
}
