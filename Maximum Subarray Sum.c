#include <stdio.h>

int maximum(int a, int b, int c)
{
  if (a>=b && a>=c)
    return a;
  else if (b>=a && b>=c)
    return b;
  return c;
}

int max_crossing_subarray(int ar[], int low, int mid, int high)
{

  int left_sum = -1000000;
  int sum = 0;
  int i;


  for (i=mid; i>=low; i--)
  {
    sum = sum+ar[i];
    if (sum>left_sum)
      left_sum = sum;
  }

  int right_sum = -1000000;
  sum = 0;

  for (i=mid+1; i<=high; i++)
  {
    sum=sum+ar[i];
    if (sum>right_sum)
      right_sum = sum;
  }

  return (left_sum+right_sum);
}

int max_sum_subarray(int ar[], int low, int high)
{
  if (high == low)
  {
    return ar[high];
  }
  int mid = (high+low)/2;
}

int main()
{
  int a[] = {3, -1, -1, 10, -3, -2, 4};
  printf("%d\n", max_sum_subarray(a, 0, 6));
  return 0;
}
