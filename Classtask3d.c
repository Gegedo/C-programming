// #include <stdio.h>
// // Writing my name 1000 times
// int main() {
    
//     for (int i = 0; i < 1000; i++) {
//         printf("Kennedy\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// // Print number from 1 to 10, using for loop
// int main() {
//     // Loop to print numbers from 1 to 10
//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", i);
//     }

//     return 0;
// }


// #include <stdio.h>
// // Write a C Program using increment and decrement operator
// int main() {
//     int num = 5;

    
//     printf("Initial value: %d\n", num);

//         num = num + 1;
//     printf("After increment: %d\n", num);

//         num = num - 1;
//     printf("After decrement: %d\n", num);

//     return 0;
// }


// Function

#include<stdio.h>
int square();
void main()
{
    printf("calculating the area of the square\n");
    square();

}
int square()
{
    int side;
    printf("Enter the length of the side in meters:");
    scanf("%d",&side);
    printf("area of square is %d", side * side);

}