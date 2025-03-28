/*
WAP to nd the maximum number between two numbers using a pointer.
input num1- 32, num2 - 65
O/P num2 is max.
*/

#include <stdio.h>
int find_MaxNum(int *num1, int *num2)
{
  return (*num1 > *num2) ? *num1 : *num2;
}
int main()
{
  int a,b,max;
  printf("Enter Two Number:\n");
  scanf("%d %d",&a,&b);
  max = find_MaxNum(&a,&b);
  printf("MAximum number is %d",max);
  return 0;
}