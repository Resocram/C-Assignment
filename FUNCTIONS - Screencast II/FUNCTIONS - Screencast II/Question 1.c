/*define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void drawline(length);
void drawshape(side);
int main(void) {
	drawshape(3);
	system("PAUSE");
	return 0;
}

void drawline(length) {
	int starcount = 0;
	int periodcount = 0;
	while (starcount < length) {
		printf("*");
		starcount++;
	}
	while (periodcount < length) {
		printf(".");
		periodcount++;
	}
	printf("\n");
}

void drawshape(side) {
	int count = side;
	while (count > 0) {
		drawline(side);
		count--;
	}
}
*/