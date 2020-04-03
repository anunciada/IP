#include <stdio.h>
#include <math.h>

int main(void)
{
	double height, weight;

	printf("Height (m) and weight (kg)? ");
	scanf("%lf %lf", &height, &weight);

	double bmi = weight / pow(height, 2.0);

	printf("BMI: %0.1f ", bmi);

	if(bmi < 18.5){
		printf("underweight\n");
	}
	else if(bmi >= 18.5 && bmi < 25){
		printf("normal\n");
	}
	else if(bmi >= 25 && bmi < 30){
		printf("overweight\n");
	}
	else{
		printf("obese\n");
	}

	return 0;
}
