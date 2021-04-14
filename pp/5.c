#include <stdio.h>

int main() {
	// [Dang bai tinh tien]

	// Cau 1: yeu cau nguoi dung nhap so gio cong nhan lam (vao gia tri "t" la so nguyen).
	int t;
	printf("Hay nhap so gio cong nhan lam: ");
	scanf("%d", &t);

	/*  Cau 2: tinh so tien ma cong nhan lam va in ra
	 *         biet moi gio lam cong nhan dc tra luong 50k.
	 */
	int luong;
	luong = t * 50;
	printf("\nCau 2: So luong cua cong nhan bang %d", luong);

	/*  Cau 3: neu cong nhan lam viec tren hoac bang 15 tieng, hay thuong cho cong nhan ay 200k
	 *         neu cong nhan lam viec tren hoac bang 10 tieng, hay thuong cho cong nhan ay 100k
	 *         neu cong nhan lam viec duoi 10 tieng, hay tru luong cua cong nhan ay 9000k
	 *         va in ra so luong cua cong nhan mot lan nua.
	 *
	 *  [Dieu kien kiem tra]
	 *    (a == b): a bang b
	 *    (a >  b): a lon hon b
	 *    (a <  b): a nho hon b
	 *    (a >= b): a lon hon hoac bang b
	 *    (a <= b): a nho hon hoac bang b
	 *    (a != b): a khac b
	 *
	 *  CHU Y: "=" (1 dau bang) va "==" (2 dau bang) co tac dung khac nhau
	 *    a =  b: dat gia tri a bang gia tri b
	 *    a == b: kiem tra xem gia tri a co bang gia tri b khong
	 */
	if( t >= 15 ) {
		luong = luong + 200;
	} else if( t >= 10 ) {
		luong = luong + 100;
	} else {
		luong = luong - 9999;
	}

	printf("\nCau 3: So luong cua cong nhan bang %d", luong);
}
