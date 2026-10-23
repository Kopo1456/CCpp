#include <stdio.h>

void main()
{
	// nhap 1 ki tu bat ki, hien ki tu do o he 10, 16
	//short ran = 0;
	//printf("nhap vao ki tu bat ki: ");
	//scanf_s("%c", &ran);
	//printf("ki tu he 10: %d\nki tu he 16: %x", ran, ran);

	//bai2: nhap 2 so nguyen a, b
	//in ra tong, hieu, tich, thuong cho moi dong

	int a = 0;
	int b = 0;
	printf("nhap so nguyen a : ");
	scanf_s("%d", &a);
	printf("nhap so nguyen b : \n");
	scanf_s("%d", &b);
	
	printf("tong: %d\n", a + b);
	printf("hieu: %d\n", a - b);
	printf("tich: %d\n", a * b);
	printf("thuong: %.2f\n", (float) a / b);
}