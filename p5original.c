#include <stdio.h>

float input()
{
  float n;
  printf("Enter a number to find square root of:\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt=n;
  float temp=0;
  while(temp!=sqrt)
  {
    temp=sqrt;
    sqrt=(n/temp +temp)/2;
  }
  return sqrt;
}
void output(float n, float sqrt_result)
{
  printf("%f",sqrt_result);
}
int main()
{
  float n=input();
  float sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}