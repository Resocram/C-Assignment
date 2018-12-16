#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double calcCost(double weight);
int main(void) {
	double parcelweight;
	double cost;
	printf("Please enter the weight of the package:\n");
	scanf("%lf", &parcelweight);
	cost = calcCost(parcelweight);
	printf("The total cost of the parcel is $%.2f\n", cost);

	system("PAUSE");
	return 0;

}

double calcCost(double weight) {
	double cost;
	if (weight <= 2) {
		cost = 3.00;
	}
	else if (weight > 4) {
		cost = 4.50 + 0.95*(weight - 4);
	}
	else {
		cost = 3.00 + 0.75*(weight - 2);
	}
	return cost;
}
