#include <stdio.h>

int main() {
	int m, n, i, j, k;

	printf("Hay nhap so m: "); scanf("%d", &m);
	printf("Hay nhap so n: "); scanf("%d", &n);
	float a[m][n];
	float hold;

	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("Hay nhap gia tri cua a[%d][%d]=", i, j); scanf("%f", &hold);

			a[i][j]=hold;
		}
	}

	printf("\nCac thanh phan cua ma tran la:\n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			hold=a[i][j];

			printf("%f ", hold);
		}

		printf("\n");
	}

	printf("\nCac thanh phan cua cot mot la:");
	for(i=0;i<m;i++) {
		hold=a[i][0];

		printf("%f ", hold);
	}

	do {
		printf("\nHay nhap so k: "); scanf("%d", &k);
	} while(!((k>0)&&(k<=m)));
	k--;
	float tich=1;
	for(j=0;j<n;j++) {
		tich=tich*a[k][j];
	}
	printf("\nDap an cau 5 la: %f", (float)tich);
}
