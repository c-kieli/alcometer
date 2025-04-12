#include <stdio.h>
#include <stdbool.h>

int main()
{
    // https://moodle.oulu.fi/pluginfile.php/1515573/mod_resource/content/1/Alcometer.pdf
    unsigned short weight = 0;
    unsigned short bottles = 0;
    unsigned short hours = 1;
    bool male = true;

    printf("Enter weight:");
    scanf_s("%hu",&weight);

    printf("Enter bottles:");
    scanf_s("%hu",&bottles);

    printf("Enter hours:");
    scanf_s("%hu",&hours);

    char choice;

    printf("Enter gender(m=male,f=female):");
    scanf_s(" %c",&choice);

    if (choice == 'm') {
        male = true;
    } else {
        male = false;
    }

    float litres = bottles * 0.33;
    float grams = litres * 8 * 4.5;
    //printf("Grams %.5f",grams);
    float burning = (float)weight / (float)10;
    //("Burning is %.5f",burning);
    grams = grams - burning * hours;
    //printf("Grams %.5f",grams);
    float result = 0;
    if (male) {
        result = grams / (weight * 0.7);
    } else {
        result = grams / (weight * 0.6);
    }

    printf("Weight %hu, bottles %hu and hours %hu\n",weight,bottles,hours);
    printf("Your blood alcohol level is %.2f\n",result);

    return 0;
}
