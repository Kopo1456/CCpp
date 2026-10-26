#include <stdio.h>
#include <math.h>

void main()
{
	//giai pt bac 2 ax^2 + bx +c = 0 voi a, b, c
	//tinh delta = b^2 - 4ac
	//delta > 0 pt co 2 nghiem x1 = (-b +sqrt(delta))/2a, x2 = (-b -sqrt(delta))/2a
	//delta = 0 pt co 1 nghiem x = -b/2a
	//delta < 0 pt vo nghiem

	int a = 0;
	int	b = 0;
	int c = 0;
	int delta = 0;

	printf("giai pt bac 2\n");
	printf("nhap a: ");
	while (a == 0)
	{
		scanf_s("%d", &a);
		if (a == 0)
		{
			printf("a khong dc = 0\n");
			printf("nhap a: ");
		}
	}
	printf("nhap b: ");
	scanf_s("%d", &b);

	printf("nhap c: ");
	scanf_s("%d", &c);

	delta = pow(b, 2) + 4 * a * c;
	if (delta > 0)
	{
		printf("pt co 2 nghiem:\n");
		printf("x1 = %.2f\n", (float)-b + sqrt(delta) / (2 * a));
		printf("x2 = %.2f", (float)-b - sqrt(delta) / (2 * a));
	}
	else if (delta == 0)
	{
		printf("pt co 1 nghiem:");
		printf("x = %d", -b / (2 * a));
	}
	else printf("pt vo nghiem");
}