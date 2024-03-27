/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double num, num2, num3;
    
    printf("Qual o número?");
    scanf("%lf", &num);
    printf("Qual o número 2?");
    scanf("%lf", &num2);
    printf("Qual o número 3?");
    scanf("%lf", &num3);
    
    
    
    
   if(num == num2 && num2 == num3)
       printf("3");
   else if(num == num2 || num == num3 || num2 == num3)
       printf("2");
   else
       printf("0");
   
    
   
    return 0;
}
