#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main()
{
    // https://moodle.oulu.fi/pluginfile.php/1515573/mod_resource/content/1/Alcometer.pdf
    unsigned short weight = readShort("Enter weight:");
    unsigned short bottles = readShort("Enter bottles:");
    unsigned short hours = readShort("Enter hours:");
    bool male = readBool("Enter gender(m=male,f=female):");
    float bloodAlcoholLevel = calculateBloodAlcoholLevel(weight,bottles,hours,male);
    printf("Weight %hu, bottles %hu and hours %hu\n",weight,bottles,hours);
    printf("Your blood alcohol level is %.2f\n",bloodAlcoholLevel);
    return 0;
}
