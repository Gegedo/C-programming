// Write a program and include all main arithmetic operations (+,-,*,/,%,pow)

#include<stdio.h>
#include<math.h>

int main(){
    int intOperand1 = 20;
    int intOperand2 = 15;
    int floatOperand1 = 10.5;
    int intOperand3 = 2;

    printf("%d + %d = %d\n", intOperand1, intOperand2, intOperand1 + intOperand2);
    printf("%d - %d =%d\n", intOperand1, intOperand2, intOperand1 - intOperand2);
    printf("%d / %d =%d\n", intOperand1, intOperand2, intOperand1 / intOperand2);
    printf("%d * %d =%d\n", intOperand1, intOperand2, intOperand1 * intOperand2);
    printf("%d %% %d =%d\n", intOperand1, intOperand2, intOperand1 % intOperand2);
    printf("%d ^ %d = %f\n", intOperand2,intOperand3, pow(intOperand2,intOperand3));
    
    return 0;
}

