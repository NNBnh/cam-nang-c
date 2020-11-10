#include <stdio.h>

int main() {
	int n, j=0, tong=0;

	printf("Nhap n=");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		if(i%2==0) {
			tong=tong+i;
			j++; 
		}
	}

	printf("Dap an la: %lf", tong/(float)j);
}