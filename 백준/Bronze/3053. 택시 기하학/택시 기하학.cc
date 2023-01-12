#include <stdio.h>
//#include <stdlib.h>

#pragma warning (disable:4996)

#define PI 3.14159265358979

int main() {
	double R;
	
	scanf("%lf", &R);

	printf("%lf\n", (R * R * PI));
	printf("%lf\n", (R * R * 2));
}