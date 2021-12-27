#include<stdio.h>
int input()
{
  int a;
  printf("enter a value:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    return a;
  }
  else if(b>c&&b>a)
  {
    return b;
  }
  else if(c>a&&c>b)
  {
    return c;
  }
}
void output(int a, int b, int c, int large)
{
  printf("The largest of %d,%d,%d is %d\n", a, b, c, large);
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