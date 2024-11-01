// Write a program in C to add two numbers using pointers

#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;
    
    printf("Enter two numbers to add\n");
    scanf("%d%d", &first, &second);
    
    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("Summation = %d\n",sum);
    
    return 0;
}