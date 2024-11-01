// Determine the Maximum of two numbers using pointers

#include <stdio.h>  
   
int main() 
{  
    int x, y, *p1, *p2, *Maximum;

    p1 = &x;
    p2 = &y;

    printf("Enter Values\n");  
    scanf("%d %d", p1, p2);  

  Maximum = (*p1 > *p2) ? p1 : p2;
    printf("The Maximum of Two Number = %d\n", *Maximum);
    
    return 0;  
} 