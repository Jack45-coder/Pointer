/*

Write a program to add two matrix using pointers.
1 2 3    1 2 3       2 4 6
4 5 6    4 5 6   =   8 10 12
7 8 9    7 8 9       14 16 18

*/
#include <stdio.h>
void addMatrix(int *mat1, int *mat2, int *result, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      *(result + i * c + j) = *(mat1 + i * c + j) + *(mat2 + i * c + j);
    }
  }
}

void displayMatrrix(int *mat, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", *(mat + i * c + j));
    }
    printf("\n");
  }
}
int main()
{
  int row, col;
  printf("Enter the number of rows and colomns:\n");
  scanf("%d %d",&row, &col);
  int mat1[row][col], mat2[row][col], result[row][col];

  printf("Enter elements of first matrix:\n");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      scanf("%d",(*(mat1 + i )+ j));
    }
  }

  printf("Enter elements of second matrrix:\n");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      scanf("%d",(*(mat2 + i )+ j));
    }
  }

  addMatrix((int *)mat1, (int *)mat2, (int *)result, row, col);
  printf("Resultant matrix after addition:\n");
  displayMatrrix((int *)result, row, col);

  return 0;
}