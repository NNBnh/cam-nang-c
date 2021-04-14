#include <stdio.h>

int main() {
	/*  De bai: 
	 *  - Yeu cau nguoi dung nhap so gio lao dong cua cong nhan
	 *  - So gio lao dong cua cong nhan phai lon hon 0 va nho hon
	 *  hoac bang 30, neu nguoi dung nhap sai thi yeu cau ho nhap lai
     */
	int t;

	/*  [Quan li dieu kien]
	 *  ( dieu_kien_1 && dieu_kien_2 ): ca hai phai thoa man thi toan bo thoa man
	 *  ( dieu_kien_1 || dieu_kien_2 ): mot trong hai phai thoa man thi toan bo thoa man
	 *  !( dieu_kien ): dieu kien ben trong phai khong thoa man thi toan bo moi thoa man
     */
	do {
		printf("Hay nhap so gio cong nhan lam: ");
		scanf("%d", &t);
	} while( ( t <= 0 ) || ( t > 30 ) );

	printf("So gio cong nhan lam bang %d", t);
}
