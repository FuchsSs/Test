#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\n F or C: ");
    scanf("%c", &unit);

    unit = toupper(unit);  // viet hoa

    if(unit == 'C'){
        printf("The temp is currently in C");
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp* 9 / 5) + 32;
        printf("The temp is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("The temp is currently in F");
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp -32) * 5) / 9;
        printf("The temp is: %.1f", temp);
    }
    else{
        printf("Invalid!");
    }
}