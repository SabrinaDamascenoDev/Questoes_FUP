//Comparar quantos dos números adicionados são iguais

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
