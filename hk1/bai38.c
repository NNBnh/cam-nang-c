#include <stdio.h>

int main() {
	// Cau 1 & 2
	int n;

	do {
		printf("Hay nhap so thanh phan cua mang: ");
		scanf("%d", &n);
	} while( !( ( n >= 1 ) && ( n <= 100 ) ) );

	// Cau 3
	printf("\nCac so tu 1 den %d la: ", n);
	for(int i=1; i<=n; i++) {
		printf("%d ", i);
	}

	// Cau 4
	printf("\nCac so chia het cho 7 la: ");
	for(int i=1; i<=n; i++) {
		if ( i % 7 == 0 ) {
			printf("%d ", i);
		}
	}

	// Cau 5
	float sum=0, count=0;

	for(int i=1; i<=n; i++) {
		if ( ( i % 7 == 0 ) && ( i % 2 == 0 ) ) {
			sum += i;
			count++;
		}
	}
	printf("\nDap an cau 5 la: %f", sum / count);
}
