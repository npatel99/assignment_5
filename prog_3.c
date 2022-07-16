#include<stdio.h>
/*Write a program to print the first N natural numbers in reverse order*/
int main()
{
  int N;
  printf("first N natural numbers in reverse order : ");
  scanf("%d", &N);
  while(N>=1)
  {
    printf("%d ", N);
    N--;
  }
  printf("\n");

  return 0;
}
