#include<stdio.h>
int main (){

char opreator;
double num1 ;
double num2;
double result ;
printf("Enter your opreator (+ - * /) ");
scanf("%c", & opreator);
printf("Enter your number 1 :\n ");
scanf("%lf", & num1);
printf("Enter your number 2 :\n ");
scanf("%lf", & num2);


switch (opreator)
{
case '+' :
  result = num1+ num2 ;
  printf("\n result%lf", result);
    break;
 case '-' : 
  result = num1 - num2;
  printf("\n result %lf", result);

        break;
 case '*' : 
  result = num1 * num2;
  printf("\n result %lf", result);
    break;
   case '/' : 
  result = num1 / num2;
  printf("\n result %lf", result);
  break;


default: printf(" %c ITS NOT VALID ", opreator);
    break;
}






}