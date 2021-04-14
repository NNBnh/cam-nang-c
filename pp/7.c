#include <stdio.h>

int main() {
	/*  De bai: 
	 *  - Yeu cau nguoi dung nhap so gio lao dong cua cong nhan
	 *  - So gio lao dong cua cong nhan phai lon hon 0, neu
	 *  nguoi dung nhap sai thi yeu cau ho nhap lai
     */
	int t;

	/*  [Vong lap do-while]
	 *
	 *  do {
	 *  	cau_lenh_1;
	 *  	cau_lenh_2;
	 *  	...
	 *  } while( dieu_kien );
	 *                      ^
	 *                      |
	 *                      `- Nho them dau ";" o cuoi lenh `while`
	 *
	 *  - Tuong tu nhu lenh `while` binh thuong, chi khac rang no se
	 *  chay tap lenh trong ngoac nhon mot lan xong roi moi bat dau
	 *  kiem tra dieu kien, neu dieu kien thoa man thi no se lap lai
     */
	do {
		printf("Hay nhap so gio cong nhan lam: ");
		scanf("%d", &t);
	} while( t <= 0 );

	printf("So gio cong nhan lam bang %d", t);
}
