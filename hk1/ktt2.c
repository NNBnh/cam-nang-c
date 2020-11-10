#include <stdio.h>

int main() {
	int n;

	printf("Nhap n=");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		for(int s=0; s<=(n/2)-n; s++) {
			printf("  ");
		}
		for(int j=1; j<=i; j++) {
			printf("X ");
		}
		printf("\n");
	}
}