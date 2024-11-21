#include <stdio.h>

int main () {
	float C , F;
	printf("moi ban nhap nhiet do celsius ");
	scanf(" %.1f ", &C);
	F = C * 9 / 5 + 32;
	printf("nhiet do F la %f\n",F);
	
	return 0;

}
