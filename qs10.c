/*
Write a program to multiply two matrix using pointers.
*/
#include <stdio.h>
void inputMatrix(int *mat, int r, int c)
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", (mat + i * c + j));
    }
  }
}

void multiplyMatrix(int *mat1, int *mat2, int *result, int r1, int c1, int c2)
{
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      *(result + i * c2 + j) = 0; // initialize to 0
      for (int k = 0; k < c1; k++)
      {
        *(result + i * c2 + j) += (*(mat1 + i * c1 + k)) * (*(mat2 + k * c2 + j));
      }
    }
  }
}

void displayMatrix(int *mat, int r, int c)
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
  int r1, c1, r2, c2;
  printf("Enter the size of row and colomns for first matrix:\n");
  scanf("%d %d", &r1, &c1);

  printf("Enter the size of row and colomns for second matrix:\n");
  scanf("%d %d", &r2, &c2);

  if (c1 != r2)
  {
    printf("Matrix multiplication is not possible!\n");
    return 0;
  }

  int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

  printf("Enter elements of first matrix:\n");
  inputMatrix((int *)mat1, r1, c1);

  printf("Enter elements of second matrix:\n");
  inputMatrix((int *)mat2, r2, c2);

  multiplyMatrix((int *)mat1, (int *)mat2, (int *)result, r1, c1, c2);
  displayMatrix((int *)result,r1,c2);

  return 0;
}