#include<stdio.h>
#include<stdlib.h>

void reverse_arr(int b[], int);
int main()
{
  int N;
  printf("Declare array size:\n");
  scanf("%d", &N);

  int a[N];
  printf("\nEnter %d numbers:\n", N);

  reverse_arr(a,N);
  return 0;

}


void reverse_arr(int b[], int n)
{
  int i;

  for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }

  for(i=n;i>=0;i--)
    {
      printf("%d ",b[i]);
    }
}
