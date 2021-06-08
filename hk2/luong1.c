#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct maytinh { // Dinh dang cau truc
	char mamay[30], tenmay[30], hangsx[30];
	int namsx;
	float gia;
};

// Cau 1
void nhap(maytinh * p, int n) {
	for (int i = 0; i < n; i++) {
		/*
		 * [Yeu cau nguoi dung nhap gia tri khi lam viec voi con tro]
		 *
		 * Day la cach de nguoi dung nhap vao mot gia tri `float` hoac `int`:
		 *	scanf("%f", &(p + i) -> SO);
		 * 
		 * Con day la cach de nguoi dung nhap chuoi `char[??]`:
		 *	fflush(stdin); gets((p + i) -> CHUOI);
		*/

		printf("Nhap thong tin cua may tinh %d:\n", i + 1);
		printf("Nhap ma may tinh: ");   fflush(stdin); gets((p + i) -> mamay);
		printf("Nhap ten may tinh: ");  fflush(stdin); gets((p + i) -> tenmay);
		printf("Nhap hang san xuat: "); fflush(stdin); gets((p + i) -> hangsx);
		printf("Nhap gia: ");           scanf("%f", &(p + i) -> gia);
		printf("Nhap nam san xuat: ");  scanf("%d", &(p + i) -> namsx);
	}
}

// Cau 2
void hienthi(maytinh * p, int n) {
	for (int i = 0; i < n; i++) {
		printf("%s %s %s %.1f %d\n", (p + i) -> mamay, (p + i) -> tenmay, (p + i) -> hangsx, (p + i) -> gia, (p + i) -> namsx);
		//              -----
		//                |
		//                `--> Hien thi 1 chu so sau dau "." cua so thuc VD: 12.567000000 => 12.5
	}
}

// Cau 3
void timhangsx(maytinh * p, int n) {
	for (int i = 0; i < n; i++) {
		// `strcmp` la lenh de so sanh chuoi `char[??]`:
		if (strcmp((p + i) -> hangsx, "SAMSUNG") == 0) {
			printf("%s %s %s %.1f %d\n", (p + i) -> mamay, (p + i) -> tenmay, (p + i) -> hangsx, (p + i) -> gia, (p + i) -> namsx);
		}
	}
}

// Cau 4
void timnamsx(maytinh * p, int n) {
	for (int i = 0; i < n; i++) {
		if ((p + i) -> namsx == 2019) {
			printf("%s %s %s %.1f %d\n", (p + i) -> mamay, (p + i) -> tenmay, (p + i) -> hangsx, (p + i) -> gia, (p + i) -> namsx);
		}
	}
}

// Cau 4
void timnamsx(maytinh * p, int n) {
	for (int i = 0; i < n; i++) {
		if ((p + i) -> namsx == 2019) {
			printf("%s %s %s %.1f %d\n", (p + i) -> mamay, (p + i) -> tenmay, (p + i) -> hangsx, (p + i) -> gia, (p + i) -> namsx);
		}
	}
}

// Cau 5
void ghitep(maytinh * p, int n) {
	FILE *f; // Khai bao file
	f=fopen("D:/FILE/maytinh04.txt","wt"); // Mo  file
	if(f == NULL) { // Neu qua trinh tao file bi loi, chuong trinh se bao cao va ket thuc
		printf("\n! Tao file bi loi !");
		exit(1);
	}

	for (int i = 0; i < n; i++) {
		if ((p + i) -> gia > 2000) {
			// lenh `fprintf` khac voi lenh `printf` vi no in vao trong file chu ko phai ra man hinh
			fprintf("%s %s %s %.1f %d\n", (p + i) -> mamay, (p + i) -> tenmay, (p + i) -> hangsx, (p + i) -> gia, (p + i) -> namsx);
		}
	}

	fclose(f); // Dong file
}

int main() {
	maytinh * p;
	int n;
	printf("nhap so luong may tinh:"); scanf("%d", & n);
	p = (maytinh * ) malloc(n * sizeof(maytinh));
    
	// Cau 1
	nhap(p, n);
	
	// Cau 2
	hienthi(p, n);

	// Cau 3
	printf("\ncac may tinh cua hang sam sung la:\n");
	timhangsx(p, n);

	// Cau 4
	printf("\ncac may tinh co nam sx 2019 la:\n");
	timnamsx(p, n);

	// Cau 4
	ghitep(p, n);

	free(p); // Giai phong bo nho
	getch(); // Tat hien thi thong tin Debug
}
