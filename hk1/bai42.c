#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j;

	printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
	float a[n][n];
	float hold;

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("Nhap gia tri cua phan tu [%d][%d]: ", i, j); scanf("%f", &hold);

			a[i][j]=hold;
		}
	}

	printf("\nGia tri cua cac phan tu trong mang la: ");
	for(i=0;i<n;i++) {
		printf("\n");

		for(j=0;j<n;j++) {
			hold=a[i][j];

			printf("%f ", hold);
		}
	}

	printf("\nCac thanh phan cua cot mot la:");
	for(i=0;i<n;i++) {
		hold=a[i][0];

		printf(" %f", hold);
	}

	float tong;
	for(j=0;j<n;j++) {
		tong=0;

		for(i=0;i<n;i++) {
			tong+=a[i][j];
		}

		printf("\nTong cua cot [%d] la %f", j , tong);
	}

	printf("\n\n<3");
}
