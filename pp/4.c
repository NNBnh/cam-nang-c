#include <stdio.h>

int main() {
	// [Yeu cau nguoi dung nhap gia tri]

	// Gia tri phai ton tai thi ta moi co the lam viec duoc voi no
	int soNguyen;
	float soThuc;

	scanf("%d", &soNguyen); // Yeu cau nguoi dung nhap so nguyen vao gia tri ten la "soNguyen"
	scanf("%f", &soThuc);   // Yeu cau nguoi dung nhap so thuc vao gia tri ten la "soThuc"
	/*          ^
	 *          `- Khi va CHI KHI dung lenh `scanf` ta phai them "&" vao truoc ten gia tri
	 */

	printf("Ta co so nguyen la %d va so thuc la %f", soNguyen, soThuc);

	// Ban than cau lenh `scanf` khong bao hieu hay in bat ki dieu gi ra man hinh ca :(
	// Hay ket hop no voi lenh `printf`
	printf("Hay nhap mot so nguyen: ");
	scanf("%d", &soNguyen);
	printf("Hay nhap mot so thuc: ");
	scanf("%f", &soThuc);

	printf("Ta co so nguyen la %d va so thuc la %f", soNguyen, soThuc);
}
