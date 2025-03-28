/*
WAP to find the length of string using pointers.
*/

#include<stdio.h>
#include<string.h>
int main(){
 char str[] = "coding Age";
 char *ptr = str;
//  int len = strlen(str);
int len = 0;
while(*ptr != '\0'){
  len++;
  ptr++;
}
 printf("%d",len);





  return 0;
}