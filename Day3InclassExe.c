// Write a C Program to print name of 7 days of week using switch-case, by taking day as input from user.

#include<stdio.h>
 int main(){

    char choice;
    printf("Days of the Week\n");
    printf("Pick a day:\n");
    printf("Day 1\n");
    printf("Day 2\n");
    printf("Day 3\n");
    printf("Day 4\n");
    printf("Day 5\n");
    printf("Day 6\n");
    printf("Day 7\n");
    scanf("%c",&choice);

    switch(choice) {
        case '1' :
        printf("Day 1: Monday\n");
        break;
        case '2' :
        printf("Day 2: Tuesday\n");
        break;
        case '3' :
        printf("Day 3: Wednesday\n");
        break;
        case '4' :
        printf("Day 4: Thursday\n");
        break;
        case '5' :
        printf("Day 5: Friday\n");
        break;
        case '6' :
        printf("Day 6:Saturday\n");
        break;
        case '7' :
        printf("Day 7: Sunday\n");
            }
return 0; 

 }