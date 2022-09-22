#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float tem;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &tem);
        tem = (tem * 9/5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", tem);
    } else if(unit == 'F'){
        printf("\nEnter the temperature in Farenheit: ");
        scanf("%f", &tem);
        tem = ((tem - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", tem);
    } else {
        printf("\n %c is not a valid unit of measurement", unit);
    }
}