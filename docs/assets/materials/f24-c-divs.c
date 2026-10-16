#include <stdio.h>
#include <math.h>

int main()
{
	int num = 103;
	int div = 10;
	
	float res = sqrt(num);
	printf("sqrt(%d) = %f\n", num, res);

	int a = num;
	int b = div;
	int c = a;
	float d;	

	d = (float)a/b;
	printf("d = %f\n",d);
	
	return 0;
}
