// WAP to change  placese last ko first pr phir serialwise. Ex: Arr[2,3,4,1,9] = [9,2,3,4,1]

#include <stdio.h>
void InputArr(int *arr, int n)
{
  printf("Enter %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }
}

int replaceSpace(int *arr, int n)
{
  int last = arr[n - 1];
  for (int i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

void printArray(int *arr, int n){
  printf("Elements Here: ");
  for(int i = 0; i < n; i++){
    printf("%d ",*(arr+i));
  }
}
int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];

  InputArr(arr, n);
  replaceSpace(arr, n);
  printArray(arr,n);
  return 0;
}