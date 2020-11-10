#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;

	while(!((a>0)&&(b>0)&&(c>0)&&(a+b>c)&&(b+c>a)&&(c+a>b))) {
		printf("Nhap a="); scanf("%lf", &a);
		printf("Nhap b="); scanf("%lf", &b);
		printf("Nhap c="); scanf("%lf", &c);
	}

	double cv=a+b+c;
	double p=cv/2;

	printf("Chu_Vi=%lf\n", cv);
	printf("Dien_Tich=%lf\n", sqrt(p*(p-a)*(p-b)*(p-c)));
}