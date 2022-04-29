/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float a,b; char op;
printf("Enter Your Numbers\n");
printf("Enter You Operator +,-,*,/\n");
scanf("%f %f\n",&a,&b);
scanf("%c",&op);
switch(op)
{
case '-' :
printf("Ans: %.2f",a-b);
break;
case '+' :
printf("Ans: %.2f",a+b);
break;
case '*' :
printf("Ans: %.2f",a*b);
break;
case '/' :
printf("Ans: %.2f",a/b);
break;
default :
printf("Not Valid");
break;
}
    return 0;
}
