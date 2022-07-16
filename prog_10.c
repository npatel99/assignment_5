#include<stdio.h>
/*Write a program to print a table of N.*/
int main()
{
  int N, i = 1;
  printf("printing table of N till index [10]: ");
  scanf("%d", &N);
  while(i<=10)
  {
    printf("%d ", N*i);
    i++;
  }
  printf("\n");

  return 0;
}
