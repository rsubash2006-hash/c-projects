#include<stdio.h>
void main()
{
  int a,b;
char ch;
printf("Enter the values of a,b :");
scanf("%d %d ",&a,&b);
printf("Enter the operation :");
scanf(" %c",&ch");
switch(ch)
{
case '+': printf("Addition of %d and %d is %d ",a,b,a+b);
break;
case '-': printf("Subtraction of %d and %d is %d ",a,b,a-b);
break;
case '*': printf("Multiplication of %d and %d is %d ",a,b,a*b);
break;
case '/':
  if(b!=0)
  printf("Division of %d and %d is %d ",a,b,a/b);
  else
    printf("Division not possible");
break;
  default:
  printf("Enter valid operator \n");
}
}
