#include <stdio.h>
void swap(int *ptr, int *ptr2)
{
  int temp = *ptr;
  *ptr = *ptr2;
  *ptr2 = temp;
}
void InputArr(int arr[], int n)
{
  int *ptr = arr;
  printf("Enter the Elements\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }
}
void reverseArr(int n, int arr[]){
  int *ptr = arr;
  for(int i = n-1; i >= 0; i--){
    printf("%d", *(ptr - i));
  }
}
int main()
{
  int a, b;
  printf("Enter Value\n");
  scanf("%d %d", &a, &b);
  int *ptr = &a;
  int *ptr2 = &b;
  int sum = *ptr + *ptr2;
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  InputArr(arr, n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }
  printf("%d\n", sum);
  swap(&a, &b);
  printf("A = %d, B = %d\n", a, b);
  reverseArr(n,arr);
  return 0;
}