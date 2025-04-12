#include <stdio.h>
#include <stdbool.h>

short readShort(char* prompt) {
    short value;
    printf(prompt);
    scanf_s("%hu",&value);
    return value;
}

bool readBool(char* prompt) {
    char choice;

    printf(prompt);
    scanf_s(" %c",&choice);

    if (choice == 'm') {
        return true;
    } else {
        return false;
    }
}

float calculateBloodAlcoholLevel(short weight, short bottles, short hours,bool male) {
    float litres = bottles * 0.33;
    float grams = litres * 8 * 4.5;
    float burning = (float)weight / (float)10;
    grams = grams - burning * hours;
    float result = 0;
    if (male) {
        result = grams / (weight * 0.7);
    } else {
        result = grams / (weight * 0.6);
    }
    return result;
}
