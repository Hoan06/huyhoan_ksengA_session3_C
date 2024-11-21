#include <stdio.h>

int main () {
	// khai bao diem toan,van,anh
	float diemToan , diemVan , diemAnh , tongDiem , diemTB;
	//hoi nguoi dung nhap du lieu
	printf("moi ban nhap diem toan ");
	scanf("%f", &diemToan);
	printf("moi ban nhap diem van ");
	scanf("%f", &diemVan);
	printf("moi ban nhap diem anh ");
	scanf("%f", &diemAnh);
	// tinh tong diem va diem tb
	tongDiem = diemToan + diemVan + diemAnh;
	diemTB = tongDiem/3;
	// in ra ket qua 
	printf("tong diem la %.2f \n", tongDiem);
	printf("diem tb la %.2f", diemTB);
	
	return 0;

}
