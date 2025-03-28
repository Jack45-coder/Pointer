// WAP to print the value of a variable using a pointers.

#include <stdio.h>
int main()
{
  int a = 65;
  int *ptr = &a;
  printf("%d", *ptr);

  return 0;
}