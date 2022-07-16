#include<stdio.h>
/*Write a program to print the first N even natural numbers in reverse order*/
int main()
{
  int N;
  printf("first N even natural numbers in reverse order : ");
  scanf("%d", &N);
  while(N>=1)
  {
    printf("%d ", N*2);
    N--;
  }
  printf("\n");

  return 0;
}
