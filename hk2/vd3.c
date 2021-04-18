#include <stdio.h>
#include <math.h>

// Funtions
void cau1() {
	float x, y;
	do {
		printf("Hay nhap chieu dai (x) hcn: "); scanf("%f", &x);
	} while( !(x>0) );
	do {
		printf("Hay nhap chieu rong (y) hcn: "); scanf("%f", &y);
	} while( !(y>0) );

	printf("\n| Chu vi hcn la %f", (x+y)*2);
	printf("\n| Dien tich hcn la %f", x*y);
}

void cau2() {
	float a, b;
	printf("Hay nhap so a: "); scanf("%f", &a);
	printf("Hay nhap so b: "); scanf("%f", &b);

	if(a==0) {
		if(b==0) {
			printf("\n| Phuong trinh vo so nghiem");
		} else {
			printf("\n| Phuong trinh vo nghiem");
		}
	} else {
		printf("\n| Phuong trinh co nghiem la %f", -b/a);
	}
}

void cau3() {
	float N_input;
	printf("Hay nhap so N bat ki: "); scanf("%f", &N_input);
	int N;
	N=(int)N_input;

	if( !( (N==N_input) && (N>1) ) ) {
		for(int i=2; i<N; i++) {
			if(N%i==0) {
				printf("\n| N khong phai la so nguyen to");
				return;
			}
		}

		printf("\n| N la so nguyen to");
	} else {
		printf("\n| N khong phai la so nguyen to");
	}
}

void cau4() {
	// #NOTE vi de bai khong noi ro la tinh tong so chan o dau nen t lam vi du
	int M, sum=0;
	do {
		printf("Hay so M bat ki: "); scanf("%d", &M);
	} while( !(M>=1) );

	for(int i=1; i<M; i++) {
		if(i%2==0) {
			sum+=i;
		}
	}

	printf("\n| Tong so chan la %d", sum);
}

void cau5() {
	// #TODO
}


// Start
void main() {
	printf(
		"%s\n%s\n%s\n%s\n%s\n",

		"Chao mung den:",
		"   __  ___",
		"  /  |/  /__ ___  __ __",
		" / /|_/ / -_) _ \\/ // /",
		"/_/  /_/\\__/_//_/\\_,_/ "
	);

	int opt;
	do {
		printf(
			"\n%s\n%s\n%s\n%s\n%s\n\n%s\n\n%s",

			"1) Tinh chu vi dien tich hinh chu nhat",
			"2) Giai phuong thinh bac mot",
			"3) Kiem tra so nguyen to",
			"4) Tinh tong cac so chan",
			"5) Tim uoc chung lon nhat va boi chung nho nhat",
			"0) Thoat",

			"> "
		);
		scanf("%d", &opt);
	} while( !( (opt>=0) && (opt<=5) ) );

	printf("\n");

	switch(opt) {
		case 1: cau1()            ; break;
		case 2: cau2()            ; break;
		case 3: cau3()            ; break;
		case 4: cau4()            ; break;
		case 5: cau5()            ; break;
		case 0: printf("| Bye <3"); break;
	}

	return;
}
