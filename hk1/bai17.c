#include <stdio.h>
#include <math.h>

float cau2(float x, int k) {
	return sqrt(pow(x, k));
}

float cau3(float A, float x, int n) {
	float S=A;

	for(int i=1; i<=n; i++) {
		S+=cau2(x, n*2) / (n+1);
	}

	return S;
}

// Cau 4
void main() {
	// Cau 1
	float x, A;
	printf("Hay nhap so thuc x: "); scanf("%f", &x);
	printf("Hay nhap so thuc A: "); scanf("%f", &A);

	int n;
	do {
		printf("Hay nhap so nguyen n: "); scanf("%d", &n);
	} while( !( (n>=5) && (n<=30) ) );

	printf("S = %f", cau3(A, x, n));
}
