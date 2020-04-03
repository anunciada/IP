#include <stdio.h>
#include <math.h>

double bmi(int weight, int height){
    double result;
    result = weight / (pow((height / 100), 2));
    return result;
}

int main(void){
    int wg, hg;
    double bmir;
    printf("Insert the following values \n");
    printf("Weight (kg)= ");
    scanf("%d", &wg);
    printf("Height (cm)= ");
    scanf("%d", &hg);

    bmir = bmi(wg, hg);

    printf("Your BMI is %lf\n", bmir);
    return 0;
}