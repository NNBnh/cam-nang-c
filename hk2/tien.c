#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

void nhap(float * a, int n) {
    float * p;
    for (p = a; p < a + n; p++) {
        scanf("%f", p);
    }
}

void hienthi(float * a, int n) {
    float * p;
    for (p = a; p < a + n; p++) {
        printf("%5.1f", * p);
    }
}

void ghitep(float * a, int n) {
    FILE * f;
    f = fopen("D:/FILE/mangthuc.txt", "wt");
    if (f == NULL) {
        printf("tao file bi loi");
        exit(1);
    }
    
    float * p;
    for (p = a; p < a + n; p++) {
        if (( * p) < 10) {
            fprintf(f, "%5.1f", * p);
        }
    }
    
    fclose(f);
}

int main() {
    float * a;
    int n;
    printf("nhap so luong phan tu:"); scanf("%d", & n);
    a = (float * ) malloc(n * sizeof(float));
    
    nhap(a, n);
    
    hienthi(a, n);
    
    ghitep(a, n);
    
    free(a);
    getch();
}
