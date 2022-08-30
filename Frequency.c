#include<stdio.h> 
#include<stdlib.h>

void frequency(int b[], int n);
// Function is of the type TSRN

int main()
{
  int N;
  printf("Declare array size:\n");
  scanf("%d", &N);

  int a[N];
  printf("\nEnter %d numbers:\n", N);

  frequency(a,N);
  return 0;
  
}

void frequency(int b[], int n)
{
  
  int i;
  // Declaring another array with a max. size.

  for(i=0;i<n;i++)
    {
      scanf("%d", &b[i]);
    }

  int hash[999] = {0};
  for(i=0;i<n;i++)
    {
      hash[b[i]]++;
    }

  for(i=0;i<n;i++)
    {
      if(hash[i] != 0)
      
    printf("\nNumber: %d, Frequency = %d",i,hash[i]);
    }
  
}
