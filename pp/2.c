#include <stdio.h>

int main() {
	/*
     *  [Gia tri]
     *    __________    __________
     *   /________/|   /________/|
     *  |        | |  |        | |
     *  |   69   | |  |  3.14  | |
     *  |________|/   |________|/
     *  `soNguyen'    `-soThuc-'
     *
     *  - Gia tri nhu nhung chiec hop voi nhung ten goi
     *  - No co the chua cac loai du lieu nhu so nguyen, so thuc, dong chu, ki tu...
     */

	/*  [Khai bao gia thi]
	 *  - Khai bao gia tri giong nhu tao ra mot chiec hop
	 *  - Co rat nhieu loai gia tri khac nhau, tuong ung voi no la cac loai hop de dung no
	 */
	int soNguyen; // Ta tao mot gia tri ten la "soNguyen" va no chua dung duoc so nguyen
	float soThuc; // Ta tao mot gia tri ten la "soThuc" va no chua dung duoc so thuc

	soNguyen = 69; // Ta co the nhap du lieu vao gia tri bang cach nay
	soThuc = 3.14;

	// Gio hay in chung ra
	printf("Ta co so nguyen la %d va so thuc la %f", soNguyen, soThuc);
	/*                         ^                ^    ________  ______
     *  [Giu cho]              |                |       |        |
     *  - Khi su dung printf   `------------------------'        |
     *    ta co the dat dau giu cho de may tinh |                |
     *    tu nhap du lieu duoc chi thi sau do   `----------------'
     *
     *   /  %d: giu cho cho so nguyen  \
     *   \  %f: giu cho cho so thuc    /
     */
}
