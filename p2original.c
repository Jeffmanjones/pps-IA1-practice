#include <stdio.h>

int input()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  return a;
}

int cmp(int a, int b, int c)
{
  int large=a;
  if(large<b)
    large=b;
  if(large<c)
    large=c;
  return large;
}

void output(int a, int b, int c, int large)
{
  printf("the largest of %d,%d and %d is %d",a,b,c,large);
}

int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}