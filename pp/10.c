#include <stdio.h>

int main() {
	// [Dang bai mang mot chieu]

	/*  Cau 1: yeu cau nguoi dung nhap gia tri m la so nguyen lon hon 0
	 *         tao mang bao gom cac thanh phan so thuc voi m thanh phan
	 */
	int m;

	do {
		printf("Hay nhap so thanh phan cua mang: ");
		scanf("%d", &m);
	} while( m <= 0 );

	/*
     *  [Mang]
     *    ____________________________________
     *   /______/______/______/______/______/|
     *  |      |      |      |      |      | |
     *  |  22  |  -1  |  69  |  90  |  00  | |
     *  |______|______|______|______|______|/
     *  `- #1 -`- #2 -`- #3 -`- #4 -`- #5 -'
     *
     *  - Mang giong nhu mot chiec hop co nhieu ngan
     *  - Moi ngan deu co mot so thu tu rieng
     */
	// Khai bao mang: kieu_du_lieu ten_mang[so_thanh_phan];
	float a[m];

	// Cau 2: yeu cau nguoi dung nhap tung thanh phan vao mang
	int i;

	for(i=0; i<m; i++) {
		printf("Hay nhap gia tri cua thanh phan a[%d]: ", i);
		scanf("%f", &a[i]);
	}

	// Cau 3: in mang ra
	for(i=0; i<m; i++) {
		printf("%f ", a[i]);
	}
}
