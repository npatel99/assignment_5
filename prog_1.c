#include<stdio.h>
/*Write a program to print MySirG N times on the screen*/
int main()
{
  int N, i = 1;
  printf("Print MySirG N times: ");
  scanf("%d", &N);
  
  while(i<=N)
  {
    printf("MySirG\n");
    i++;
  }

  return 0;
}
