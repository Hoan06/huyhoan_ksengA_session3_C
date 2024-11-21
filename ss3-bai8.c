#include <stdio.h>

int main() {
	// khai bao du lieu
	int so , a , b , c , d , nghichDao;
	// yeu cau nguoi dung nhap du lieu 
	printf("moi ban nhap so co 4 chu so ");
	scanf("%d", &so);
	//nghich dao cac so
	a = so/1000; // lay ra chu so hang nghin
	b= so%1000/100; // lay ra chu so hang tram
	c=so%100/10; // lay ra chu so hang chuc
	d=so%10; // lay ra chu so hang don vi
	nghichDao= d*1000+c*100+b*10+a;
	// in ra ket qua
	printf(" so nghich dao cua 4 chu so tren la %d", nghichDao);
	
	return 0;

}
