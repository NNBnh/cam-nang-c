#include <stdio.h>

int main() {
	/*  [Viet tat]
	 *  int i; // Khai bao gi tri
	 *  i=1;   // Dat gia tri bang mot giu lieu nao day
	 */
	int i=1; // Ta co the gan du lieu vao gia tri luong ngay khi khai bao

	/*  [Vong lap while]
	 *
	 *  while( dieu_kien ) {
	 *  	cau_lenh_1;
	 *  	cau_lenh_2;
	 *  	...
	 *  }
	 *
	 *  - Tap lenh trong ngoac nhon se duoc chay lap di lap lai
	 *  khi va chi khi dieu kien thoa man
	 *  - Neu dieu kien khong con thoan man, vong lap se ket thuc
     */
	while( i <= 10 ) {
		printf("\nHien tai i = %d", i);

		i++; // ten_gia_tri++ la viet tat cua ten_gia_tri = ten_gia_tri + 1
	}
}
