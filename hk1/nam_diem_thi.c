#include <stdio.h>

int main() {
	double d_toan, d_ly, d_anh, d_uutien;
	int k=0;

	printf("Nhap diem toan: "); scanf("%lf", &d_toan);
	printf("Nhap diem ly: ");   scanf("%lf", &d_ly);
	printf("Nhap diem anh: ");  scanf("%lf", &d_anh);

	while(!((k>=1)&&(k<=3))) {
		printf("Nhap khu vuc: "); scanf("%d", &k);
	}

	switch(k) {
		case 1:
			d_uutien=1;
			break;
		case 2:
			d_uutien=0.5;
			break;
		case 3:
			d_uutien=0;
			break;
	}

	printf("diem thi la: %lf", d_toan+d_ly+d_anh+d_uutien);
}
