#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j;

	printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
	float a[n][n];

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("Nhap gia tri cua phan tu [%d][%d]: ", i, j); scanf("%f", &a[i][j]);
		}
	}

	printf("\nGia tri cua cac phan tu trong mang la: ");
	for(int i=0;i<n;i++) {
		printf("\n");

		for(int j=0;j<n;j++) {
			printf("%f ", a[i][j]);
		}
	}

	printf("\nCac thanh phan cua cot mot la:");
	for(int i=0;i<n;i++) {
		printf(" %f", a[i][0]);
	}

	float tong;
	for(int j=0;j<n;j++) {
		tong=0;

		for(int i=0;i<n;i++) {
			tong+=a[i][j];
		}

		printf("\nTong cua cot [%d] la %f", j , tong);
	}
}
