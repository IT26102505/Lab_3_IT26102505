#include <stdio.h>

int main (void)

{
	float acceleration,time,distance_m,velocity_kmh,velocity_ms;

	printf("Enter takeoff speed in kilometers per hour:");
	scanf("%f",&velocity_kmh);
	printf("Enter the traveled distance in meters:");
	scanf("%f",&distance_m);

	//calculations
	velocity_ms = velocity_kmh/3.6;                                 //convertion of velocity
	acceleration = (velocity_ms*velocity_ms)/(2.0*distance_m);      //got this equation buy time subtitiution
	time = velocity_ms/acceleration;

	printf("Acceleraion of the figher Jett is %.2fm/s² and the time it took to take off is %.2f seconds\n",acceleration,time);

	return 0;
}
