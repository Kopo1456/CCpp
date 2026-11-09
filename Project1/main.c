#include <stdio.h>
#include <math.h>

void main()
{
	//tinh tien gui ngan hang sau n nam
	//de bai:nhap vao so tien gui ban dau, tien lai moi nam va so nam gui tien
	//hay tinh so tien nhan duoc sau n nam (lai tinh theo lai kep)
	//biet lai hien tai cua viettinbank la 8.2%/nam

	//int tien_gui = 0;
	//float tien_lai_nam = 0;
	//int so_nam_gui = 0;

	//printf("nhap so tien gui:"); scanf_s("%d", &tien_gui);
	//printf("nhap so nam gui tien:"); scanf_s("%d", &so_nam_gui);
	//printf("nhap tien lai moi nam:"); scanf_s("%f", &tien_lai_nam);

	//int so_tien_nhan_duoc = tien_gui;
	//for (int i = 0; i < so_nam_gui; i++)
	//{
	//	so_tien_nhan_duoc = so_tien_nhan_duoc + (so_tien_nhan_duoc * (tien_lai_nam / 100));
	//	printf("tien nhan duoc sau %d nam: %d\n", i, so_tien_nhan_duoc);
	//}


	//nhap vao so bat ky kiem tra so do co phai la so nguyen to hay khong
	//int num = 0;
	//int kiem_tra = 1;
	//printf("nhap vao so bat ky:"); scanf_s("%d", &num);

	//if (num < 2)
	//{
	//	printf("so khong hop le!\n");
	//}
	//else if (num == 2)
	//{
	//	printf("2 la so nguyen to");
	//}
	//else
	//{
	//	for (int i = 2; i < num / 2; i++)
	//	{
	//		if (num % i == 0)
	//		{
	//			kiem_tra = 0;
	//			break;
	//		}
	//	}

	//	if (kiem_tra)
	//	{
	//		printf("%d la so nguyen to", num);
	//	}
	//	else
	//	{
	//		printf("%d khong la so nguyen to", num);
	//	}
	//}

	//in ra cac so nguyen to nho hon n
	//de bai nhap vao mot so tu nhien n bat ky
	int n = 0;
	printf("nhap n: "); scanf_s("%d", &n);

	if (n < 2)
	{
		printf("khong co so nguyen to nao nho hon n\n");
	}
	else
	{
		printf("cac so nguyen to la: ");
		for (int i = 2; i <= n; i++)
		{
			int kiem_tra_so_nguyen_to = 1;
			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					kiem_tra_so_nguyen_to = 0;
					break;
				}
			}

			if (kiem_tra_so_nguyen_to)
			{
				printf("%d ", i);
			}
			
		}
	} 
}