/*
Write a program to concatenate two strings using pointers.
IP1- Coding IP2- Age
OP - CodingAge
*/

#include<stdio.h>
#include<string.h>
void inputsString(char *str, int size){
  printf("Enter a string:\n");
  fgets(str, size, stdin);
  str[strcspn(str, "\n")] = '\0';
}
int main(){
 char str1[50];
 char str2[20];
inputsString(str1,50);
inputsString(str2,20);

int len1 = strlen(str1), len2 = strlen(str2);
int i = 0, j = 0;
while(str1[i] != '\0'){
  i++;
}
while(str2[j] != '\0'){
  str1[i] = str2[j]; 
  i++;
  j++;
}
str1[i] = '\0';
printf("%s\n", str1);
// printf("%d %d",len1,len2);



  return 0;
}