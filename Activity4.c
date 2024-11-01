#include<stdio.h>
struct myStructure {
    int number;
    char letter;
    
    };

    int main() {
        //Create a structure variable of myStructure called s1
        struct myStructure s1;

        //Assigned values to numbers of s1
        s1.number = 8;
        s1.letter = 'P' ;
        printf("My number: %d\n", s1.number);
        printf("My letter: %c\n", s1.letter);
        return 0;
    }
