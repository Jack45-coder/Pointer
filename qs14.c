// Ascending / Desending

#include <stdio.h>
void inputsArr(int n, int arr[])
{
  int *ptr = arr;
  printf("Enter %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }
}

int BubbleSort_AS(int n, int arr[])
{
  int *ptr = arr;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int SelectionSort_DS(int n, int arr[]){
  int *ptr = arr;
  for(int i = 0; i < n; i++){
    int max_Idx = i;
    for(int j = 0+i; j < n; j++){
     if(arr[j] > arr[max_Idx]){
      max_Idx = j;
     }
    }
    int temp = arr[i];
    arr[i] = arr[max_Idx];
    arr[max_Idx] = temp;
  }
}

void printArray( int n,int arr[]){
  int *ptr = arr;
  for(int i = 0; i < n; i++){
    printf("%d ",*(ptr + i));
  }
}

int main()
{
  int n;
  printf("Enter the size Of Array: ");
  scanf("%d", &n);
  int arr[n];
  inputsArr(n, arr);

  printf("Ascending Here:\n");
  BubbleSort_AS(n, arr);
  printArray(n,arr);

  printf("\n");
  
  printf("Decending Here:\n");
  SelectionSort_DS(n,arr);
  printArray(n,arr);

  return 0;
}