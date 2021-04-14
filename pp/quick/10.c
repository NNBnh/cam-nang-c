#include <stdio.h>

int main() {
	// Cau 1: tao mang
	int m;

	do {
		printf("Hay nhap so thanh phan cua mang: ");
		scanf("%d", &m);
	} while( m <= 0 );
	float a[m];

	// Cau 2: yeu cau nguoi dung nhap tung thanh phan vao mang
	int i;

	for(i=0; i<m; i++) {
		printf("Hay nhap gia tri cua thanh phan a[%d]: ", i);
		scanf("%f", &a[i]);
	}

	// Cau 3: in mang ra
	for(i=0; i<m; i++) {
		printf("%f ", a[i]);
	}
}
