/*program to read 2 strings and check if they are anagrams or not
anagrams should have equal length and the strings must have same set of characters*/
# include <stdio.h>
main()
{
    char str1[30],str2[30],ch;
    int i,l1=0,l2=0;

    printf("Enter the first string : ");
    gets(str1);

    printf("Enter the second string : ");
    gets(str2);

    l1=strlen(str1);
    l2=strlen(str2);

    if(l1!=l2)
    {
        printf("%s and %s are not anagrams..",str1,str2);
        exit(0);
    }

    for(i=0;i<l1;i++)
    {
        ch=str1[i];
    }
}
