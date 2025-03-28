/*
WAP to reverse an array using pointer.
*/

#include <stdio.h>
void reverseArr(int n, int *ptr)
{
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", *(ptr + i));
  }
}
int main()
{
  int n;
  printf("Enter the size of arr: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int *ptr = arr;
  reverseArr(n, ptr);

  return 0;
}