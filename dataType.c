#include <stdio.h>

int main(void)
{
  char character = 's';
  char str[] = "DSS workshop";
  int integer;
  integer = 39;
  float number = 123.40;
  //integer = number;
  // it only takes the integer part of the float
  printf("%c\n", character);
  // this prints our a single character typed
  // and similarly we can print a single letter from str
  printf("%c\n", str[1]);

  printf("%s\n", str);
  // printf("%s\n", integer);
  // gives an error when we try to print something that is not on its type
  printf("%d\n", integer);
  // here we can see C is strongly typed
  // so that everything has to match its own typy

  printf("%f\n", number);
  printf("%.3f\n", number);
  // print 3 digit of the float number
  return 0;
}
