#include <stdio.h>

void main()
{	
	//bai5 Nhap n(1 <= n <= 100) va n so nguyen vao mang.
	//	In cac so nguyen to trong mang va dem so luong.
	//	Neu khong co, in "Khong co so nguyen to".

	//int n = 0;
	//int arr[100] = { 0 };
	//char count = 0;

	//while (1)
	//{
	//	printf("nhap n trong khoang 1 <= n >= 100: "); scanf_s("%d", &n);
	//	if (n < 1 || n >100)
	//	{
	//		printf("n khong hop le!!\n");
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	//printf("nhap n so nguyen:\n");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("nhap so nguyen %d: ", i + 1);scanf_s("%d", &arr[i]);
	//}

	//printf("cac so nguyen to: ");
	//int len_arr = sizeof(arr) / sizeof(arr[1]);
	//for (int i = 0; i < len_arr; i++)
	//{
	//	if (arr[i] == 2)
	//	{
	//		count++;
	//		printf("2 ");
	//	}
	//	else if (arr[i] > 2)
	//	{
	//		for (int j = 2; j < arr[i]; j++)
	//		{
	//			if (arr[i] % j == 0)
	//			{
	//				break;
	//			}
	//			else
	//			{
	//				count++;
	//				printf("%d ", arr[i]);
	//				break;
	//			}
	//		}
	//	}
	//}
	//printf("\nso luong: %d", count);

	//bai6 dao nguoc mang

	/*int n = 0;
	int arr[100] = { 0 };

	while (1)
	{
		printf("nhap n trong khoang 1 <= n >= 100: "); scanf_s("%d", &n);
		if (n < 1 || n >100)
		{
			printf("n khong hop le!!\n");
		}
		else
		{
			break;
		}
	}
	printf("nhap n so nguyen:\n");
	for (int i = 0; i < n; i++)
	{
		printf("nhap so nguyen %d: ", i + 1);scanf_s("%d", &arr[i]);
	}
	printf("mang dao la: ");
	for (int i = n - 1; i > -1; i--)
	{
		printf("%d ", arr[i]);
	}*/

	//bai 7 tim kiem phan tu trong mang

	int n = 0;
	int finder = 0;
	char kiem_tra = 0;
	int arr[100] = { 0 };

	while (1)
	{
		printf("nhap n trong khoang 1 <= n >= 100: "); scanf_s("%d", &n);
		if (n < 1 || n >100)
		{
			printf("n khong hop le!!\n");
		}
		else
		{
			break;
		}
	}
	printf("nhap n so nguyen:\n");
	for (int i = 0; i < n; i++)
	{
		printf("nhap so nguyen %d: ", i + 1);scanf_s("%d", &arr[i]);
	}
	printf("so can tim trong mang: ");scanf_s("%d", &finder);
	printf("vi tri: ");
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == finder)
		{
			printf("%d ", i+1);
			kiem_tra = 1;
		}
	}
	if (kiem_tra == 0)
	{
		printf("khong tim thay");
	}
}