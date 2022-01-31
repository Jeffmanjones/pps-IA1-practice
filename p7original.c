#include <stdio.h>

typedef struct complex
{
  float real,imaginary;
}complex;
complex input_complex()
{
  complex a;
  printf("Enter a complex number:\n");
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}
complex add(complex a, complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(complex a,complex b, complex c)
{
  printf("%.1f + %.1fi + %.1f + %.1fi is %.1f + %.1fi\n",a.real,a.imaginary, b.real, b.imaginary,c.real, c.imaginary);
}
int main()
{
  complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}