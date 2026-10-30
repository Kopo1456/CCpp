#include <stdio.h>
#include <math.h>

void main()
{
	//in bang cuu chuong tu 2 den 9
	//for (int i = 2; i <= 9; i++)
	//{
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	//yc: nguoi dung nhap tu ban phim so tu nhien n
	//tinh va in ra giai thua n
	int n = 0;
	int gt_n = 1;
	printf("nhap so tu nhien n:"); scanf_s("%d", &n);
	for (int i = 1;i <= n; i++)
	{
		gt_n *= i;
	}

	printf("giai thua cua %d = %d", n, gt_n);
}