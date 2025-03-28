/*
WAP to take input elements in an array and print array using pointer.
input Arr = {10,20,30,40,50}
O/P = 10, 20, 30, 40, 50
*/
#include<stdio.h>
void inputArr(int n, int arr[]){
  int *ptr =  arr;
  printf("Enter the %d elements:\n",n);
  for(int i = 0; i < n; i++){
    scanf("%d",ptr + i);
  }
  for(int i = 0; i< n; i++){
    printf("%d ",*ptr + i);
  }
}
int main(){
  int n;
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  int arr[n];
  inputArr(n,arr);


  return 0;
}