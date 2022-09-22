#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'A':
            printf("perfect\n");
            break;
        case 'B':
            printf("good\n");
            break;
        case 'C':
            printf("okay\n");
            break;
        case 'D':
            printf("meh\n");
            break;
        case 'F':
            printf("fail\n");
            break;
        default:
            printf("Please enter a valid grade!");
    }

    return 0;
}