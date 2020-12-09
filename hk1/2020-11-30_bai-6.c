#include <stdio.h>

int main() {
	int n, i, sum3=0, sum5=0, count=-1;

	// Cau 1 & 2
	do {
		printf("Hay nhap so n: "); scanf("%d", &n);
	} while(!((n>=1)&&(n<=100)));

	// Cau 3, 4, 5
	printf("Cac so le tu 1 den n la: ");
	for(i=0;i<=n;i++) {
		if(!(i%2==0)) {
			printf("%d ", i);
		}

		if(i%3==0) {
			sum3+=i;
		}

		if(i%5==0) {
			sum5+=i;
			count++;
		}
	}
	printf("\nTong cac so chia het cho 3 la: %d", sum3);
	printf("\nTBC cac so chia het cho 5 la: %f", (float)sum5/count);
}
