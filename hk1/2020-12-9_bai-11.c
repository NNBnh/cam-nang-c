#include <stdio.h>

int main() {
	int n, m, cost;

	// Cau 1 & 2
	do {
		printf("Hay nhap thoi gian gia cong: "); scanf("%d", &n);
	} while(!((n>=0)&&(n<=60)));

	// Cau 3
	printf("Hay nhap so thiet bi de gia cong: "); scanf("%d", &m);

	// Cau 4
	printf("\nSo thoi gian de gia cong m (%d) san pham la: %d", m, m*n);

	// Cau 5
	if(m<100) {
		cost=m*800;
	} else {
		cost=m*900;
	}
	printf("\nSo chi phi de gia cong m (%d) san pham la: %d", m, cost);
}
