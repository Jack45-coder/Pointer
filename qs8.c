/*
WAP to access a two dimentional array using pointers.
*/
#include <stdio.h>
int main()
{
  int n, m;
  printf("Enter the size of row & colomn:\n");
  scanf("%d %d", &n, &m);
  int arr[n][m];
  int *ptr = (int *)arr;

  printf("Enter %d elemebts:\n", n * m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", (ptr + i * m + j));
    }
  }

  printf("The 2D Array Elements Are:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d  ", *(ptr + i * m + j));
    }
    printf("\n");
  }

  return 0;
}