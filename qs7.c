// WAP to search an element in an array using pointers.
// inputs arr{1,12,33,41,14} k = 33;
// O/P = 33 is at 2nd index.

#include<stdio.h>
void findElements(int *ptr, int n){
  int k;
  printf("Enter the Find element: ");
  scanf("%d",&k);
  for(int i = 0; i < n; i++){
    if(ptr[i] == k)
    printf("%d is at %d index\n",k,i);
  }
}
int main(){
  int n;
  printf("Enter array size: ");
  scanf("%d",&n);
  int arr[n];
 for(int i = 0; i < n; i++){
  scanf("%d",&arr[i]);
 }
int *ptr = arr;
findElements(arr,n);


  return 0;
}