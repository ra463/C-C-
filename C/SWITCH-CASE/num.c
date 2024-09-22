#include <stdio.h>
 
int main()
{
  char ch;
           ch = 'a';
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
          printf("%c is a vowel.\n", ch);
      break;
    default:
          printf("%c isn't a vowel.\n", ch);
  }              
 
  return 0;
}