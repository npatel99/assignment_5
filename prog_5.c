#include<stdio.h>
/*Write a program to print the first N odd natural numbers in reverse order.*/
int main()
{
  int N;
  printf("first N odd natural numbers in reverse order: ");
  scanf("%d", &N);
  while(N>=1)
  {
    printf("%d ", N*2-1);
    N--;
  }
  printf("\n");

  return 0;
}
