#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

// Cau 1
void nhap(float *a, int n) {
    float *p;
    for (p = a; p < a + n; p++) {
        printf("Hay nhap phan tu %d: ", *p); scanf("%f", p);
    }
}

// Cau 2
void hienthi(float *a, int n) {
    float *p;
    for (p = a; p < a + n; p++) {
        printf("%5.1f\n", *p);
    }
}

// Cau 3
void tinhtong(float * a, int n) {
    float *p, sum;
    for (p = a; p < a + n; p++) {
        sum+=*p;
    }

	printf("%f", sum);
}

// Cau 4
void timvitri(float *a, int n) {
    float *p, min = -99999, *max;
    for (p = a; p < a + n; p++) {
        if ( (*p > min) && (*p < 0) ) {
			max = p;
		}
    }

	printf("%f", max - a);
}

// Cau 6
void ghitep(float * a, int n) {
    FILE *f;
    f = fopen("D:/FILE/mangthuc.txt", "wt");
    if (f == NULL) {
        printf("\n! Tao file bi loi !");
        exit(1);
    }
    
    float *p;
    for (p = a; p < a + n; p++) {
        if ((*p) > 0) {
            fprintf(f, "%5.1f", *p);
        }
    }
    
    fclose(f);
}

int main() {
    float *a;
    int n;
    printf("Hay nhap so luong phan tu: "); scanf("%d", & n);
    a = (float * ) malloc(n * sizeof(float));
    
    // Cau 1
    nhap(a, n);
    
    // Cau 2
    hienthi(a, n);
    
    // Cau 3
    printf("\nTong cac phan tu la ");
    tinhtong(a, n);
	
    // Cau 4
    printf("\nVi tri phan tu am lon nhat la ");
	timvitri(a, n);

    // Cau 6
    ghitep(a, n);
    
    free(a);
    getch();
}
