//

#include <stdio.h>
void inputsArr(int *arr, int n)
{
  printf("Enter the %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }
}

void mergedArr(int *arr1, int *arr2, int n1, int n2, int mergedArray[])
{
  // Copy elements from arr1 to mergedArray
  for (int i = 0; i < n1; i++)
  {
    mergedArray[i] = arr1[i];
  }
  // Copy elements from arr2 to mergedArray
  for (int j = 0; j < n2; j++)
  {
    mergedArray[n1 + j] = arr2[j];
  }
}
int main()
{
  int n1, n2;

  // Input size and elements for the first array
  printf("Enter the size Of 1st Array: ");
  scanf("%d", &n1);
  int arr1[n1];
  inputsArr(arr1, n1);

  // Input size and elements for the second array
  printf("Enter the size Of 2nd Array: ");
  scanf("%d", &n2);
  int arr2[n2];
  inputsArr(arr2, n2);

  int mergedArray[n1 + n2];
  mergedArr(arr1, arr2, n1, n2, mergedArray);
  printf("Merged array: ");
  for (int i = 0; i < (n1 + n2); i++)
  {
    printf("%d ", mergedArray[i]);
  }
  return 0;
}