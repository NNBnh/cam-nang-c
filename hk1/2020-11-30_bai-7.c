#include <stdio.h>

int main() {
	int n, a, luong_chinh, luong_phu;

	// Cau 1 & 2
	do {
		printf("Hay nhap so ngay lam viec cua cong nhan : "); scanf("%d", &n);
	} while(!((n>=0)&&(n<=30)));

	// Cau 3
	luong_chinh=n*400;
	printf("Luong chinh cua cong nhan la: %d\n", luong_chinh);

	// Cau 4
	do {
		printf("Hay nhap so gio lam them cua cong nhan : "); scanf("%d", &a);
	} while(!(a>=0));

	if(a>=50) {
		luong_phu=a*200;
	} else {
		luong_phu=a*250;
	}
	printf("Luong phu cua cong nhan la: %d\n", luong_phu);

	// Cau 5
	printf("Tong thu nhap cua cong nhan la: %d", luong_chinh+luong_phu);
}
