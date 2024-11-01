#include<stdio.h>
  int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if (marks >=90 ) 
    {
        printf("A\n");
    } else if (marks >=75 &&marks <90)
    {
        printf("B+\n");

   } else if (marks >=60 &&marks <75)
    {
        printf("B\n");

    } else if (marks >=50 &&marks <60)
    {
        printf("C\n");
    }
    else if (marks < 50){
        printf("F\n");
    }
    return 0;
  }
        