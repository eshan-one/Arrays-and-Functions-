#include <stdio.h>
#include<stdlib.h>

// function to sort an array of any size.
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
  int j;
  int temp;

  for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
      
    }

  for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
        {
          if(a[i]> a[j])
          {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
        }
    }


  printf("\nThe numbers after sorting are:\n");
  for(i=0;i<n;i++)
    {
      printf("%d ", a[i]);
    }
  }
