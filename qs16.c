// WAP to rotate d elements: [d-2] Ex-{1,2,3,4,5,6,7} = [6,7,1,2,3,4,5]

#include<stdio.h>
void takeinputs(int *arr, int n){
  printf("Enter %d elements:\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",(arr+i));
  }
}

void Rotate_D_Element(int *arr, int n,int d){
  int temp[d];

  // COPY LAST D ELEMENTS TO TEMP ARRAY:
  for(int i = 0; i < d; i++){
    temp[i] = arr[n-d+i];
  }

  // SHIFT REMAINNING ELEMENT TO THE RIGHT:
  for(int i = n-1; i >= d; i--){
    arr[i] = arr[i-d];
  }

  // COPY TEMP ARRAY TO THE FIRST D POSITION:
  for(int i = 0; i < d; i++){
    arr[i] = temp[i];
  }
}

void printArray(int *arr, int n){
  printf("Array HERE: ");
  for(int i = 0; i < n; i++){
    printf("%d ",*(arr+i));
  }
}

int main(){
  int n,d;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  takeinputs(arr,n);

  printf("Enter rotate elements D->: ");
  scanf("%d",&d);
  Rotate_D_Element(arr,n,d);
  printArray(arr,n);



  return 0;
}