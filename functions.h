#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdbool.h>

short readShort(char* prompt);
bool readBool(char* prompt);
float calculateBloodAlcoholLevel(short weight, short bottles, short hours,bool male);

#endif // FUNCTIONS_H
