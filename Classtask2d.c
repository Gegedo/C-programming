// Operator Precedence (BODMAS)

#include<stdio.h>
int main(){
    int a;

    // Question 1 : a = 5 + 8 * 6
    a = 5 + 8 * 6;
    printf("a = 5 + 8 * 6: %d\n", a);
    // Question 2: a = 5 * 8 - 2 * 6
    a = 5 * 8 - 2 * 6;
    printf("a = 5 * 8 - 2 * 6: %d\n", a);
    // Question 3: a = 5 * 8 / 2 * 6 
    a = 5 * 8 / 2 * 6;
    printf("a = 5 * 8 / 2 * 6: %d\n", a);
    // Question 4:a = 5 * (8/2)*6
    a = 5 * (8/2)* 6;
    printf("a = 5 * (8/2)*6: %d\n", a);
    // Question 5: a = 5 + 8/2 * 6 
    a = 5 + 8/2 * 6;
    printf("a = 5 + 8/2 * 6 %d\n", a);
    return 0 ;


}