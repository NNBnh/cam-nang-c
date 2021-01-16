<h1 align="center">Steal the 6</h1>
<p align="center">Ăn chắc 6 điểm</p>


## About

Bài viết này nhằm đưa ra những mẫu code nhỏ nhằm để giúp các bạn dễ hình dung và tiện cho vào bài tập của mình để dễ vượt qua các câu từ 1 đến 3 trong hầu hết các dạng bài và giảm việc viết đi viết lại code.

Đương nhiên nếu bạn học thuộc (không khuyến khích) thì bạn có thể vượt qua con 6.

## Contents
- [About](#about)
- [Contents](#contents)
- [Nhập](#nhập)
- [In ra](#in-ra)
  - [Chạy qua ma trận](#chạy-qua-ma-trận)
- [Hết](#hết)

## Nhập

Thường là câu 1, yêu càu người dùng nhập vào một gíá trị nào đấy

- Nhập số x:

```c
int x;
float y;

printf("Hay nhap x: "); scanf("%d", &x); # Nếu đây là số nguyên
printf("Hay nhap y: "); scanf("%f", &y); # Nếu đây là số thực
```

- Nhập số x với điều kiện lớn hơn 0 và nhỏ hơn 100:

```c
int x;

do {
	printf("Hay nhap x: "); scanf("%d", &x);
} while(!((x>=0)&&(x<=100))); # Thay đổi điều kiện oẳ đây tùy thuọc vào yêu cầu của đề bài
```

- Nhập m (số hàng) và n (số cột) của ma trận:

```c
int m, n;

do {
	printf("Hay nhap so hang cua ma tran: "); scanf("%d", &m);
} while(!(m>0));

do {
	printf("Hay nhap so cot cua ma tran: "); scanf("%d", &n);
} while(!(n>0));

int   a[m][n]; # Nếu đây là ma trận số nguyên
float a[m][n]; # Nếu đây là ma trận số thực
```

- Nhập từng thành phần bên trong ma trận (thường là câu 2):

```c
int m, n, i, j, hold;

for(i=0; i<m; i++) {
	for(j=0; j<n; j++) {
		printf("Hay nhap gia tri cua thanh phan a[%d][%d]: ", i, j); scanf("%d", &hold);
		a[i][j]=hold;
	}
}
```

## In ra

- In ra ma trận (thường là câu 3, nếu may mán mà vào dạng bài có dúng 3 câu kiểu này, mỗi câu 2 điểm thì bạn đã ăn chắc 6 điểm):

```c
int m, n, i, j, hold;

for(i=0; i<m; i++) {
	for(j=0; j<n; j++) {
		hold=a[i][j];
		printf("%d ", hold);
	}

	printf("\n"); # \n là kí tự xuống dòng
}
```

### Chạy qua ma trận

Từ đây trở đi là lấy từ điểm 6 trở lên (lấy đi)

- In ra số trong ma trận mà thỏa mãn diều kiện nhất định:

```c
int m, n, i, j, hold;

for(i=0; i<m; i++) {
	for(j=0; j<n; j++) {
		hold=a[i][j];
		
		if(hold%2==0) {
			printf("%d ", hold); # Nếu số là số chẵn
		}
	}
}
```

- Tính trung bình cộng của tất cả các số thỏa mãn điều kiện:

```c
int m, n, i, j, hold, count;
float sum;

for(i=0; i<m; i++) {
	for(j=0; j<n; j++) {
		hold=a[i][j];
		
		if(hold%2==0) {
			sum+=hold;
			count++
		}
	}
}

tbc=sum/count;
```

## Hết

Sorry nếu có lỗi chính tả, nốt đây là đoạn code để lấy học bổng và thể hiện sự thống trị

- Mời thầy ăn bánh vòng:

```c
             k;double sin()
         ,cos();main(){float A=
       0,B=0,i,j,z[1760];char b[
     1760];printf("\x1b[2J");for(;;
  ){memset(b,32,1760);memset(z,0,7040)
  ;for(j=0;6.28>j;j+=0.07)for(i=0;6.28
 >i;i+=0.02){float c=sin(i),d=cos(j),e=
 sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
 h*e+f*g+5),l=cos      (i),m=cos(B),n=s\
in(B),t=c*h*g-f*        e;int x=40+30*D*
(l*h*m-t*n),y=            12+15*D*(l*h*n
+t*m),o=x+80*y,          N=8*((f*e-c*d*g
 )*m-c*d*e-f*g-l        *d*n);if(22>y&&
 y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
 ".,-~:;=!*#$@"[N>0?N:0];}}/*#****!!-*/
  printf("\x1b[H");for(k=0;1761>k;k++)
   putchar(k%80?b[k]:10);A+=0.04;B+=
     0.02;}}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/
```

> <h1 align="center">Made with ❤️ by <a href="https://github.com/NNBnh"><i>NNB</i></a></h1>
>
> <p align="center"><a href="https://www.buymeacoffee.com/nnbnh"><img src="https://img.shields.io/badge/buy_me_a_coffee%20-%23F7CA88.svg?logo=buy-me-a-coffee&logoColor=333333&style=for-the-badge" alt="Buy Me a Snack (Buy Me a Coffee)"></p>
