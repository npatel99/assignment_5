#include<stdio.h>
/*Write a program to print the first N odd natural numbers*/
int main()
{
  int N, i = 1;
  printf("first N odd natural numbers: ");
  scanf("%d", &N);
  while(i<=N)
  {
    printf("%d ", i*2-1);
    i++;
  }
  printf("\n");

  return 0;
}
