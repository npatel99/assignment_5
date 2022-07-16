#include<stdio.h>
/*Write a program to print squares of the first N natural numbers*/
int main()
{
  int N, i = 1;
  printf("squares of the first N natural numbers : ");
  scanf("%d", &N);
  while(i<=N)
  {
    printf("%d ", i*i);
    i++;
  }
  printf("\n");

  return 0;
}
