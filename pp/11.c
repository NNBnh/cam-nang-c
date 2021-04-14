#include <stdio.h>

int main() {
	// [Dang bai mang hai chieu] (a.k.a. ma tran)

	/*  Cau 1: yeu cau nguoi dung nhap gia tri m la so nguyen ( 0 < m <= 5)
	 *         yeu cau nguoi dung nhap gia tri n la so nguyen ( 0 < n <= 5)
	 *         tao mang bao gom cac thanh phan nguyen voi m hang va n cot
	 */
	int m, n, i, j; // Ta co the khai bao nhieu gia tri cung mot luc

	do {
		printf("Hay nhap so hang cua mang: ");
		scanf("%d", &m);
	} while( ( m <= 0 ) || ( m > 5 ) );
	do {
		printf("Hay nhap so cot cua mang: ");
		scanf("%d", &n);
	} while( ( n <= 0 ) || ( n > 5 ) );

	/*
     *  [Mang 2D]
     *  _________________
     *  |~~||#1|#2|#3|#4|
     *  |--||--|--|--|--|
     *  |#1|| 0|-1|69|30|
     *  |#2||-5|24| 0|11|
     *  |#3||90|20|-2|-8|
     *  |#4||32|64|99|-3|
     */
	int a[m][n];

	// Cau 2: yeu cau nguoi dung nhap tung thanh phan vao mang
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("Hay nhap gia tri cua thanh phan a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	// Cau 3: in mang ra
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}
}
