// WAP to print the swap value using pointer.

#include <stdio.h>
void Swap(int *p, int *p2)
{
  int temp = *p;
  *p = *p2;
  *p2 = temp;
  printf("%d %d", *p, *p2);
}
int main()
{
  int a = 5, b = 6;
  Swap(&a,&b);

  return 0;
}