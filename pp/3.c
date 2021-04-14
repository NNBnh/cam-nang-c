#include <stdio.h>

int main() {
	printf("Xin chao\nD15-CNTT7\n\n\nI Love You!\n~Chut Chut!\n________________");
	/*              ^
	 *   [\n]       `- Day la ki tu xuong dong --,
     *                 yo!                    <|-'
	 */

	int a;
	a = 2;
	printf("\nHien tai gia tri cua a = %d", a);

	/* [Tinh toan]
	 *   +: cong
	 *   -: tru
	 *   *: nhan
	 *   /: chia
	 *   %: chia (lay so du lam ket qua)
	 */
	a = 1 + 1;
	printf("\nHien tai gia tri cua a = %d", a);

	int b;
	b = a + 3;
	printf("\nHien tai gia tri cua a = %d va b = %d", a, b);

	a = a + 1;
	printf("\nHien tai gia tri cua a = %d va b = %d", a, b);

	b = a + 7;
	printf("\nHien tai gia tri cua a = %d va b = %d", a, b);

	printf("\n\n################################\nHay nho hien tai a = %d \n################################", a);

	b = a + 2; printf("\nb = a + 2 = %d", b);
	b = a - 2; printf("\nb = a - 2 = %d", b);
	b = a * 2; printf("\nb = a * 2 = %d", b);
	b = a / 2; printf("\nb = a / 2 = %d", b);
	b = a % 2; printf("\nb = a % 2 = %d", b);
}
