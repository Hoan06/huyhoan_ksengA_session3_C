#include <stdio.h>

int main() {
	// khai bao do dai va chieu cao
	float a , h , s;
	// yeu cau nguoi dung nhap du lieu
	printf("moi ban nhap chieu dai canh tam giac ");
	scanf("%f", &a);
	printf("moi ban nhap chieu cao canh tam giac ");
	scanf("%f", &h);
	// tinh dien tich tam giac va in ra ket qua
	s= (a*h)/2;
	printf("dien tich tam giac la %.2f", s);
	
	return 0;

}
