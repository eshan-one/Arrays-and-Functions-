#include<stdio.h>
#include<stdlib.h>


// Nature of function = TSRN
void duplicate(int b[], int n);
int main()
{
  int N;
  printf("Declare array size:\n");
  scanf("%d", &N);

  int a[N];
  printf("Enter %d numbers:\n", N);

  duplicate(a,N);

  
  return 0;
}


// Here the same approach is used for soritng the array. Impirtant point is to construct loops by comparing first element with its adjacent successing element.
void duplicate(int b[], int n)
{
  int i,j,count=0;

  for(i=0;i<n;i++)
    {
        scanf("%d", &b[i]);

    }

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
      {
        if(b[i] == b[j])
        {
          count+=1;
          
          
        }
        
      }

    
  }

  printf("\nThe number of duplicate elements occuring in the array is\n %d", count);

  
}
