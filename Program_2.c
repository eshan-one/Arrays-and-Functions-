#include <stdio.h>
#include<stdlib.h>

// Function to print the smallest number in an array of a size given by the user
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
  int min = 999;

  for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
      
    }

  for(i=0;i<n;i++)
    {
      if(min > a[i])
      {
        min = a[i];
      }
    }

  printf("\nThe smallest number in the array is %d ", min);

  }
