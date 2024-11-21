#include<stdio.h>

int main(){
	float pi = 3.14;
	float r ;
	
	// tinh chu vi, dien tich 
	printf("moi ban nhap ban kinh hinh tron ");
	scanf("%f", &r);
	float C,S;
     C = 2 * pi * r;
     S = pi * r * r;
	
	
	printf("Chu vi hinh tron la: %.2f\n",C);
	printf("Dien tich hinh tron la: %.2f",S);
	
	return 0;
}
