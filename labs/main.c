#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double a,b,c;
	double x1,x2,d;
	printf("Vvedite a:\n");
	scanf("%lf",&a);
	printf("Vvedite b:\n");
	scanf("%lf",&b);
	printf("Vvedite c:\n");
	scanf("%lf",&c);
	
	d = pow(b,2) - 4*a*c;
	printf("d = %lf\n",d);
	if (d < 0) printf("korney net\n");
	if (d > 0) {
		x1 = -b + sqrt(d)/(2*a);
		x2 = -b - sqrt(d)/(2*a);
	
		printf("x1 = %lf\n,x1");
		printf("x2 = %lf\n,x2");
	}
	
	if (d == 0){
		x1 = -b + sqrt(d)/(2*a);
		printf("Only one koren x = %fl\n",x1);	
	}
	
	

	return 0;
}
