#include <stdio.h>

void printRomanNumeral(int number) {
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (number > 0) {
        while (number >= decimalValues[i]) {
            printf("%s", romanNumerals[i]);
            number -= decimalValues[i];
        }
        i++;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Roman Numeral: ");
    printRomanNumeral(number);
    return 0;
}

