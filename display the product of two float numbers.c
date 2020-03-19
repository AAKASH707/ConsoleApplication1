#include <stdio.h>
int main(){
   float num1, num2, product;
   printf("Enter first Number: ");
   scanf("%f", &num1);
   printf("Enter second Number: ");
   scanf("%f", &num2);
   product = num1 * num2; 
   printf("Product of entered numbers is:%.3f", product);
   return 0;
}
