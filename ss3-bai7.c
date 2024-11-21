#include <stdio.h>

int main() {
	// khai bao du lieu
	int so , a , b , c , d , total;
	// yeu cau nguoi dung nhap du lieu 
	printf("moi ban nhap so co 4 chu so ");
	scanf("%d", &so);
	//tinh tong cac so
	a = so/1000; // lay ra chu so hang nghin
	b= so%1000/100; // lay ra chu so hang tram
	c=so%100/10; // lay ra chu so hang chuc
	d=so%10; // lay ra chu so hang don vi
	total = a+b+c+d;
	// in ra ket qua
	printf(" tong cac chu so co trong 4 chu so la %d", total);
	
	return 0;

}
