//program to swap values of 2 variables using functions(pointers)
# include <stdio.h>
void swap(int *,int *);
main()
{
   int a,b;

   printf("Enter a number A : ");
   scanf("%d",&a);
   printf("Enter a number B : ");
   scanf("%d",&b);

   swap(&a,&b);

   printf("\nA : %d",a);
   printf("\nB : %d",b);
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
