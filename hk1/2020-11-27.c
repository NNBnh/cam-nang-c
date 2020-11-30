#include <stdio.h>

int main() {
	int n, i;
	float x;

	printf("Nhap so phan tu: "); scanf("%d", &n);
	float a[n];
	float hold;

	for(i=0;i<n;i++) {
		printf("Nhap phan tu [%d]: ", i); scanf("%f", &hold);

		a[i]=hold;
	}

	printf("\nCac phan tu cua mang gom:");
	for(i=0;i<n;i++) {
		hold=a[i];

		printf(" %f", hold);
	}

	printf("Nhap so x: "); scanf("%f", &x);
	for(i=0;i<n;i++) {
		hold=a[i];

		if(hold==x) {
			printf("\nSo x ton tai trong mang!\n");
			a[i]=0;
		}
	}

	printf("\nCac phan tu cua mang gom:");
	for(i=0;i<n;i++) {
		hold=a[i];

		printf(" %f", hold);
	}
}
