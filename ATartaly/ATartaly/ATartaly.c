#include <stdio.h>
#include <stdlib.h>

float calcSurfaceArea(float height, float radius)
{
	const float Pi = 3.14159265359;
	return 2 * Pi * radius * height + 2 * Pi * (radius * radius);
}

float calcPaintCanNum(float height, float radius)
{
	return calcSurfaceArea(height, radius)/2;
}

int main(void)
{
	float height, radius;

	printf_s("Please specify tank height:\n");
	scanf_s("%f", &height);
	printf_s("Please specify tank radius:\n");
	scanf_s("%f", &radius);
	
	printf_s("%f cans of paint are necessary to paint the tank.", calcPaintCanNum(height, radius));
	return 0;
}