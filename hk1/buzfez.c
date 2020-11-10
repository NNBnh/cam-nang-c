#include <stdio.h>

int main() {
	int n=0, chan=0, ba=0;

	while(!((n>=1)&&(n<=100))) {
		printf("Nhap n="); scanf("%d", &n);
	}

	for(int i=1; i<=n; i++) {
		printf("%d ", i);

		if(i%2==0) {
			chan+=i;

			if(i%3==0) {
				ba+=i;
			}
		}
	}

	printf("\ntong_chan=%d", chan);
	printf("\ntong_ba=%d", ba);
}