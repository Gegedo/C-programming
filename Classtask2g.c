// Day 2 Practice Questions
//  Write a program to check if a number is divisible by 2 or not. (without using if-else and switch)
//  Write a C program to print value for 3/2 and 3.0/2

// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d", &num);
//     printf("%d is %sdivisible by 2\n", num, (num % 2 == 0)? "" :"not");
    
//     return 0;

// }

#include<stdio.h>
int main() {
int intOperand1 = 3;
int intOperand2 = 2;
float floatOperand1 = 3.0;

// int operand int
printf("%d / %d = %d\n", intOperand1, intOperand2, intOperand1 / intOperand2);

// float Operand int
printf("%f / %d = %f \n", floatOperand1,intOperand2,floatOperand1 / intOperand2 );

return 0;
}


