
//Celsius to Fahrenheit
#include<stdio.h>
int main()
{
	float f,C;
	printf("Enter Fahrenheit:");
	scanf("%f",&f);
	C=(f - 32) / 1.8;	
	printf("Celsius = %f",C);
	return 0;
}

