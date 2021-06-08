#include <stdio.h>

void main() {
  float a,b;

  printf("Hay nhập số a: "); scanf("%f", &a);
  printf("Hay nhập số b: "); scanf("%f", &b);

  if( (a>0) && (b>0) && (a=b) ) {
    printf("Đây là hình vuông");
  } else {
    printf("Đây không phải là hình vuông");
  }
}
