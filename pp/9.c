#include <stdio.h>

int main() {
	int i;

	printf("Dem tu 1 den 10 su dung vong lap while:");
	i=1; // lenh_chuan_bi
	while( i <= 10 ) { // dieu_kien
		printf("\nHien tai i = %d", i);

		i++; // lenh_sau_moi_vong_lap
	}

	/*  [Vong lap for]
	 *
	 *  for( lenh_chuan_bi ; dieu_kien ; lenh_sau_moi_vong_lap ) {
	 *  	cau_lenh_1;
	 *  	cau_lenh_2;
	 *  	...
	 *  }
	 *
	 *  - Vong lap nay chi la cach viet gon gang cho vong lap while
	 *  trong mot so hoan canh
     */
	printf("\n\nDem tu 1 den 10 su dung vong lap for:");
	for( i=1 ; i <= 10 ; i++ ) {
		printf("\nHien tai i = %d", i);
	}
}
