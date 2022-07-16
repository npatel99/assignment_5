#include<stdio.h>
/*Write a program to print the first N natural numbers.*/
int main()
{
  int N, i = 1;
  printf("print first N natural numbers : ");
  scanf("%d", &N);
  while(i<=N)
  {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  return 0;
}
