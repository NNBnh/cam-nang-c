#include <stdio.h>

int main() {
	// Cau 1: tao mang
	int m, n;

	do {
		printf("Hay nhap so hang cua mang: ");
		scanf("%d", &m);
	} while( ( m <= 0 ) || ( m > 5 ) );
	do {
		printf("Hay nhap so cot cua mang: ");
		scanf("%d", &n);
	} while( ( n <= 0 ) || ( n > 5 ) );
	int a[m][n];

	// Cau 2: yeu cau nguoi dung nhap tung thanh phan vao mang
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("Hay nhap gia tri cua thanh phan a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	// Cau 3: in mang ra
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}
}
