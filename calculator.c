#include<stdio.h>
int main(){
   int a,b;
   char operator;
   double result;
   printf("\nenter the first number: ");
   scanf("%d",&a);
   printf("\nenter the operator(+,-,*,/): ");
   scanf("  %c",&operator);
   printf("\nenter the second number: ");
   scanf("%d",&b);
   switch(operator){
        case'+':
            result=a+b;
            printf("\nresult: %lf",result);
            break;
        case'-':
            result=a-b;
            printf("\nresult: %lf",result);
            break;
        case'*':
            result=a*b;
            printf("\nresult: %lf",result);
            break;
        case'/':
            result=a/b;
            printf("\nresult: %lf",result);
            break;
        default:
            printf("not valid operator");
   }
    return 0;
}