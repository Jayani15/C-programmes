//creating a header and 4 functions in it

//1.function to calculate mean of 3 numbers
//function definition
float average(int a, int b, int c)
{
   float res;
   res = (a + b + c) / 3.0;
   return res;
}

//2.function to check positivity or negativity of a number
//function definition
void sign(int x)
{
    if(x>0)
        printf("%d is positive",x);
    else
        if(x<0)
            printf("%d is negative",x);
        else
            printf("%d is neutral",x);
    return(0);
}

//3.function to find word count of a string
//function definition
void wordcount(char str[])
{
    int i,wc=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
         wc++;
         i++;

         if(str[i]==' ')
         wc=wc;
        }
    }
    printf("%d words are present in %s",wc,str);
    return(0);
}

//4.function to convert string into proper case
//function definition
void proper_case(char str[])
{
    int i;

    if(str[0]>=65 && str[0]<=90)
        printf("%c",str[0]);
    else
    {
        if(str[0]>=97 && str[0]<=122)
            printf("%c",str[0]-32);
    }

    for(i=1;str[i]!=0;i++)
    {
        if(str[i]==' ')
        {
            printf("%c",str[i]);
            i++;
            if(str[i]>=97 && str[i]<=122)
                printf("%c",str[i] - 32);
            else
            {
                if(str[i]>=65 && str[i]<=90)
                   printf("%c",str[i]);
            }
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)
                printf("%c",str[i]);
            else
            {
                if(str[i]>=65 && str[i]<=90)
                   printf("%c",str[i] + 32);
            }
        }
    }
}
