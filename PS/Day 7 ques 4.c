#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int i, word;
  printf("Input the string : ");
  gets(a);
  word = 1;
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
      {
          word++;
      }
      i++;
  }
  printf("Total number of words in the string is : %d\n", word);
  return 0;
}
