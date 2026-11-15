#include <stdio.h>

void main()
{	
	// kiem tra mang tang dan

	//int n = 0;
	//int arr[100] = { 0 };
	//char kiem_tra = 0;

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

	//for (int i = 0; i < n-1; i++)
	//{
	//	if (arr[i] < arr[i + 1])
	//	{
	//		kiem_tra = 1;
	//	}
	//	else
	//	{
	//		kiem_tra = 0;
	//		break;
	//	}
	//}
	//if (kiem_tra == 1)
	//{
	//	printf("mang tang dan");
	//}
	//else
	//{
	//	printf("mang khong tang dan");
	//}

	//sap xep mang tang dan
	//int n = 0;
	//int arr[100] = { 0 };
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
	//for (int i = 0; i < n; i++)
	//{
	//	int temp = 0;
	//	for (int j = 0; j < n; j++)
	//	{
	//		temp = arr[i];
	//		if (arr[i] < arr[j])
	//		{
	//			arr[i] = arr[j];
	//			arr[j] = temp;
	//		}
	//	}
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//xoa phan tu tai k
	//int n = 0;
	//int arr[100] = { 0 };
	//int k = 0;
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
	//printf("nhap vi tri can xoa: "); scanf_s("%d", &k);
	//for (int i = k-1; i < n-1; i++)
	//{
	//	arr[i] = arr[i + 1];
	//}
	//for (int i = 0; i < n-1; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//them phan tu tai k
	//int n = 0;
	//int arr[100] = { 0 };
	//int k = 0;
	//int x = 0;
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
	//printf("nhap x:"); scanf_s("%d", &x);
	//printf("nhap vi tri x them vao: "); scanf_s("%d", &k);
	//for (int i = k-1; i < n+1; i++)
	//{
	//	arr[n - i + 3] = arr[n - i + 2];
	//}
	//arr[k - 1] = x;
	//for (int i = 0; i < n+1; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//bai12 dem so lan xuat hien
	//int n = 0;
	//int arr[100] = { 0 };
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
	//for (int i = 0; i < n; i++)
	//{
	//	int count = 0;
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (arr[j] == arr[i])
	//		{
	//			count++;
	//		}
	//	}
	//	printf("%d: %d lan\n", arr[i], count);
	//}

	//bai 13
	int n = 0;
	int arr[100] = { 0 };
	int step = 1;

	while (step != 0)
	{
		switch (step)
		{
		case 1:
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
			break;
		case 2:
			for (int i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			break;
		case 3:
			int max = arr[0];
			int min = arr[0];
			for (int i = 0; i < n; i++)
			{
				max = arr[i] > max ? arr[i] : max;
				min = arr[i] < min ? arr[i] : min;
			}
			printf("max: %d\n", max);
			printf("min: %d\n", min);
			break;
		case 4:
			int chan = 0;
			int le = 0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] % 2 == 0)
				{
					chan++;
				}
				else if (arr[i] == 0)
				{
					continue;
				}
				else
				{
					le++;
				}
			}
			printf("chan: %d so\n", chan);
			printf("le: %d so\n", le);
			break;
		case 5:
			for (int i = 0; i < n; i++)
			{
				int temp = 0;
				for (int j = 0; j < n; j++)
				{
					temp = arr[i];
					if (arr[i] < arr[j])
					{
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
			break;
		case 6:
			int x = 0;
			char kiem_tra = 0;
			printf("nhap x:"); scanf_s("%d", &x);
			printf("vi tri: ");
			for (int i = 0; i < n; i++)
			{
				if (arr[i] == x)
				{
					kiem_tra = 1;
					printf("%d ", i + 1);
				}
			}
			if (kiem_tra == 0)
			{
				printf("khong tim thay");
			}
			printf("\n");
			break;
		default:
			break;
		}
		printf("1: tao mang\n");
		printf("2: xuat mang\n");
		printf("3: tim max/min\n");
		printf("4: dem so chan le\n");
		printf("5: sap xep tang dan\n");
		printf("6: tim kiem x\n");
		printf("0: thoat\n");
		printf("\nchon: ");scanf_s("%d", &step);

	}
}