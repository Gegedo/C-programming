#include<stdio.h>


int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age>18)
    {
        printf("Can vote.\n");
    }
    else
    {
            printf("Can not vote.\n");
    }
        return 0;
}