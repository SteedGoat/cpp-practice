#include <stdio.h>

#define DENSITY_AVERAGE  1.0459	//人的密度，单位是：公斤/每立方分米
    
int main()
{
	float weight, volume;
	char name[40];

	printf("Hi! what's your name?\n");
	scanf( "%s", name );

	printf("%s, what's your weight in kilograms?\n", name);
	scanf("%f", &weight);

	volume = weight / DENSITY_AVERAGE /1000.;

	printf("Well, %s, your volume is %.4f cubic meters. \n", name, volume);

	return 0;
}