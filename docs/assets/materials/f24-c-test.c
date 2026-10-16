#include <stdio.h>
#include <math.h>

int main()
{
	int a = pow(2, 30);
	a = 2*a;
	int bin_pos = 0b100111;
	float two_third = 0.66666666666;
	double pi = 3.1415926535;
	char mode_c = 'C';
	char mode_d = 67;
	char mode_h = '\x43';
	printf("a = %d\n", a);
	printf("bin_pos = %d\n", bin_pos);
	printf("2/3 = %f\n", two_third);
	printf("pi = %lf\n", pi);
	printf("%c\t%c\t%c\n", mode_c, mode_d, mode_h);
	return 0;
}
