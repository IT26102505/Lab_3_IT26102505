#include <stdio.h>
#include <math.h>   //for the root calculation
int main (void)

{
	float area,base,height;

	printf("Enter the sail's area:");
	scanf("%f",&area);

	//calculations
	base = sqrt((4.0*area)/3.0);
	height = (3*base)/2.0;

	printf("Height of the sail:%.2f\nBase of the sail is %.2f\n",height,base);

	return 0;
}
