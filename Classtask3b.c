#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(marks) {
        case 0 ... 50: 
            printf("Grade: F\n");
            break;
        case 51 ... 100:
            printf("Grade: A\n");
            break;              
       }
    return 0;

}