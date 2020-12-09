#include <stdio.h>

int main() {
	int t, m;

	// Cau 1 & 2
	do {
		printf("Hay nhap thoi gian gia cong: "); scanf("%d", &t);
	} while(!((t>=0)&&(t<=30)));

	// Cau 3
	printf("Hay nhap so thiet bi de gia cong: "); scanf("%d", &m);

	// Cau 4
	printf("\nSo thoi gian de gia cong m (%d) san pham la: %d", m, m*t);

	// Cau 5
	printf("\nSo chi phi de gia cong m (%d) san pham la: %d", m, m*500);
}
