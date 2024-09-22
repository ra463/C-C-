#include <stdio.h>
int main()
{
  char ch ;
          ch = 'a';
 // || is the OR operator

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    printf("%c is a vowel.", ch);
  else
    printf("%c isn't a vowel.", ch);
     
  return 0;
}