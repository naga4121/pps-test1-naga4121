#include<stdio.h>
void input(int *a, int *b, int *c)
{
 printf("Enter the first number:\n ");
 scanf("%d", a);
 printf("Enter the second number:\n ");
 scanf("%d", b);
 printf("Enter the third number:\n ");
 scanf("%d", c);
}
int cmp(int *a,int *b,int *c)
{
  if(a>b&&a>c)
  {
    return *a;
  }
  else if(b>c&&b>a)
  {
    return *b;
  }
  else if(c>a&&c>b)
  {
    return *c;
  }
}
void output(int a, int b, int c, int large)
{
  printf("The largest of %d,%d,%d is %d\n", a, b, c, large);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  large=cmp(&a,&b,&c);
  output(a,b,c,large);
  return 0;

}