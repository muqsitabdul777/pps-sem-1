#include<stdio.h>
int sum (int n)
{
    if (n==0)
        return 0;
    return n+sum (n-1);

}
int main ()

{
  int n;
  long long result;
  printf(" enter a number: ");
  scanf("%d",&n);
  result = sum(n);
  printf("sum of first %d natural numbers is %11d\n" ,n,result);
  return 0;
}
