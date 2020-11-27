#include <stdio.h>

int main() {
	int gia, n, doan, i;


	do {
		printf("Hay nhap gia san pham: "); scanf("%d", &gia);
	} while(!(gia>0));

	do {
		printf("Hay nhap so lan thu: "); scanf("%d", &n);
	} while(!(n>0));

	for(i=0;i<n;i++) {
		printf("Con %d lan thu, Hay doan gia san pham: ", n-i); scanf("%d", &doan);

		if(doan==gia) {
			printf("Chuan man");

			return 0;
		} else if(doan>gia) {
			printf("Gia nho hon la ban doan\n");
		} else {
			printf("Gia lon hon la ban doan\n");
		}
	}
	printf("Ngu");


	return 0;
}
