// Write a C program to Print “You have Passed your Exam”,then print name of student using strings

#include <stdio.h>

int main() {
    char name[75]; 
    char *ptr = name; 

      printf("Enter your name: ");
     scanf("%75s", ptr);
     printf("You have Passed your Exam %s\n", ptr);
     return 0;
     
}

