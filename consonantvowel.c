#include<stdio.h>
void main ()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);

  switch(ch)
  {
  case'a':
  case'e':
  case'i':
  case'o':
  case'u':
  case'A':
  case'E':
  case'I':
  case'O':
  case'U':
      printf("It is vowel\n");
      break;
  default:
    printf("It is a consonant\n");

  }
}
