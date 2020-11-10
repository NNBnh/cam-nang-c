#include <stdio.h>
#include <conio.h>

void main() {
	int n,i;
	float x, tbc=0, tong=0;
	printf("Nap so luog pan tu: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		printf("Nhap so thu %d: ", &i);
		scanf("%f", &x);
		tong+=x;
	}
	if(n>0) {
		tbc=tong/n;
	}
		printf("Trung binh cong = %f", tbc);
		getch();
}