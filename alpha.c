#include<stdio.h>
void main()
{
    char ch;
    printf("Alphabet \n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonants");
    }
}
