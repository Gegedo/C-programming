// Print the numbers from 0 to n, if n is given by user using while loop

#include <stdio.h>

int main() {
    int n, i = 0;
  
    printf("Enter a number: ");
    scanf("%d", &n);
        while (i <= n) {
        printf("%d\n", i);
        i = i + 1; 
    }

    return 0;
}
