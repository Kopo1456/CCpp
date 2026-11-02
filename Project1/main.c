#include <stdio.h>
#include <math.h>

void main()
{
	//gia lap cay ATM
	int so_tien_atm = 20000000;
	int mat_khau_sys = 123456;

	int mat_khau_user = 0;
	int so_tien_rut = 0;

	char step = 1;
	char count = 0;
	char confirm;

	while (step != 5)
	{
		switch (step)
		{
		case 1:
			printf("nhap mat khau: "); scanf_s("%d", &mat_khau_user);
			if (mat_khau_user == mat_khau_sys)
			{
				step = 2;
			}
			else
			{
				printf("mat khau sai\n");
				count++;
				if (count == 3)
				{
					printf("nhap sai qua ba lan. Chuong trinh se ket thuc");
					step = 5;
				}
				else
				{
					step = 4;
				}
			}
			break;

		case 2:
			printf("nhap so tien rut: "); scanf_s("%d", &so_tien_rut);
			if (so_tien_rut <= so_tien_atm)
			{
				step = 3;
			}
			else
			{
				printf("so tien khach hang muon rut nhieu hon tien ATM dang co\n");
			}

			break;

		case 3:
			printf("so tien khach hang rut la: %d\n", so_tien_rut);
			step = 4;
			break;

		case 4:
			printf("khach hang co muon tiep tuc? y/n:"); scanf_s(" %c", &confirm);
			if (confirm == 'y')
			{
				step = 1;
			}
			else
			{
				step = 5;
			}
			break;
		}
	}
}