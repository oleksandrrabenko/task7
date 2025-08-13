#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, r1, x2, y2, r2;

	printf("Введіть координати та радіуси для двох кіл (x1, y2, r1, x2, y2, r2): ");
    if (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2) != 6) {
		printf("\nНекоректні дані\n");
		return 1;
	}

	if (r1 <= 0 || r2 <= 0) {
		printf("\nРадуси кіл не можуть бути менші за нуль\n");
		return 0;
	}

    double dx = x2 - x1;
    double dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);

    if (d == 0) {
        if (r1 == r2)
            printf("\n-1\n");
        else
            printf("\n0\n");
    } else {
        if (d > r1 + r2)
            printf("\n0\n");
        else if (fabs(d - (r1 + r2)) < 1e-9)
            printf("\n1\n");
        else if (d < fabs(r1 - r2))
            printf("\n0\n");
        else if (fabs(d - fabs(r1 - r2)) < 1e-9)
            printf("\n1\n");
        else
            printf("\n2\n");
    }

    return 0;
}
