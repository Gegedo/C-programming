// Write a Program to check if the entered letter is upper case or lower case
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    } 
    else {
        printf("Not a letter\n");
    }

    return 0;
}
