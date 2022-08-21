#include <stdio.h>
#include<stdlib.h>

// Function is of the type TSRN
int arr(int[] ,int);

int main()
{
  int N;
  
  printf("Declare array size:\n");
  scanf("%d", &N);

  int b[N];
  printf("\nEnter %d numbers:\n", N);

  arr(b,N);

  
  return 0;
  
}
int arr(int a[], int n )
{

  int i;
  int max= -999;

  for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
      
    }

  for(i=0;i<n;i++)
    {
      if(max < a[i])
      {
        max = a[i];
      }
    }

  printf("\nThe graetest number in the array is %d ", max);

  }

  
