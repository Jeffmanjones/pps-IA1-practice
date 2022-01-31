#include <stdio.h>

void input_two_string(char a[20], char b[20])
{
  printf("Enter a string:\n");
  scanf("%s",a);
  printf("Enter another string:\n");
  scanf("%s",b);
}
int strcmp(char a[20], char b[20])
{
  int result=0,i=0;
  while(a[i]!='\0' && b[i]!='\0')
  {
    result=a[i]-b[i];
    if(result!=0)
      break;
    i++;
  }
  return result;
}
void output(char a[20], char b[20],int result)
{
  if(result==0)
  printf("both words are the same.");
  else if(result>0)
  printf("%s is greater than %s",a,b);
  else
  printf("%s is greater than %s",b,a);
}
int main()
{
  char a[20], b[20];
  input_two_string(a,b);
  int result=strcmp(a,b);
  output(a,b,result);
  return 0;
}