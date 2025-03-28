/*
WAP to the find the reverse of a strings using pointers
*/
#include <stdio.h>
#include <string.h>
int main()
{
  char str[] = "Hello";
  char *ptr = str;
  int len = strlen(str);
  for(int i = len; i >= 0; i--)
  printf("%c",str[i]);

  return 0;
}