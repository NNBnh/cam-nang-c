#include <stdio.h>

int main() {
	int n, luong_chinh, luong_thuong=0;

	// Cau 1 & 2
	do {
		printf("Hay nhap so ngay lam viec cua cong nhan : "); scanf("%d", &n);
	} while(!((n>=0)&&(n<=31)));

	// Cau 3
	luong_chinh=n*150;
	printf("Luong chinh cua cong nhan la: %d\n", luong_chinh);

	// Cau 4
	if(n>24) {
		luong_thuong=(n-24)*200;
	}
	printf("Luong thuong cua cong nhan la: %d\n", luong_thuong);

	// Cau 5
	printf("Tong thu nhap cua cong nhan la: %d", luong_chinh+luong_thuong);
}
