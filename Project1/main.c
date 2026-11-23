#include <stdio.h>
#include <math.h>
#include "lib.h"

void main()
{	
	in_duong_ke(10);
	printf("bang diem\n");
	in_duong_ke(10);

	printf("diem trung binh ban 1: %.2f, xep loai: %c\n", tinh_diem_tb(8, 7, 7), xep_loai(tinh_diem_tb(8, 7, 7)));
	printf("diem trung binh ban 2: %.2f\n", tinh_diem_tb(9, 6, 7));
	printf("diem trung binh ban 3: %.2f\n", tinh_diem_tb(9, 6, 5));

	int a = 5;
	tang_mot(&a);
	printf("bien a: %d\n", a);
}