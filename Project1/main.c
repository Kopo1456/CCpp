#include <stdio.h>
#include <math.h>

void main()
{	
	//nhap so nguyen a, b in ra ket qua tich phan ham f(x) = x^2

	//int a = 0;
	//int b = 0;
	//printf("nhap a: "); scanf_s("%d", &a);
	//printf("nhap b: "); scanf_s("%d", &b);

	//int n = 1000;
	//float h = (b - a) * 1.0 / n;
	//float tong = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	float daybe = pow((a + h * i), 2);
	//	float daylon = pow((a + h * (i + 1)), 2);
	//	tong += (daybe + daylon) * h / 2;
	//}
	//printf("ket qua la: %.2f\n", tong);


	//cho mang so nguyen arr[2, 4, 6, 8, 10]
	//tinh va in ra tong va trung binh cong cua cac phan tu

	//int arr[] = { 2, 4, 6, 8, 10 };
	//int len_arr = sizeof(arr) / sizeof(arr[0]);
	//int tong = 0;
	//for (int i = 0; i < len_arr; i++)
	//{
	//	tong += arr[i];
	//}

	//printf("tong cac phan tu la: %d\n", tong);
	//printf("trung binh cong cac phan tu la: %.2f\n", (float)tong / (len_arr));

	//cho mang so nguyen arr[4, 9, 2, -1, 7]
	//tim gia tri lon nhat va nho nhat

	int arr[] = { 4, 9, 2, -1, 7 };
	int len_arr = sizeof(arr) / sizeof(arr[0]);
	int lon_nhat = arr[0];
	int nho_nhat = arr[0];

	for (int i = 1; i < len_arr; i++)
	{
		lon_nhat = lon_nhat > arr[i] ? lon_nhat : arr[i];
		nho_nhat = nho_nhat < arr[i] ? nho_nhat : arr[i];
	}

	printf("nho nhat la: %d\n", nho_nhat);
	printf("lon nhat la: %d\n", lon_nhat);
}