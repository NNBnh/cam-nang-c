<h1 align="center">Cẩm nang lập trình <code>C</code></h1>
<p align="center">Của Nhật Anh Nguyễn</p>
<p align="center"><img width="25%" src="https://cdn.iconscout.com/icon/free/png-512/c-programming-569564.png"></p>
<p align="center"><img src="https://img.shields.io/github/license/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=for-the-badge" alt="License: GPL-3.0"> <img src="https://img.shields.io/github/last-commit/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=for-the-badge"></p>
<p align="center"><img src="https://img.shields.io/github/watchers/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=flat-square"> <img src="https://img.shields.io/github/stars/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=flat-square"> <img src="https://img.shields.io/github/forks/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=flat-square"> <img src="https://img.shields.io/github/issues/NNBnh/cam-nang-c?labelColor=181818&color=585858&style=flat-square"></p>

## Chủ đề
`C` là một ngôn ngữ mệnh lệnh được phát triển từ đầu thập niên 1970 bởi Dennis Ritchie để dùng trong hệ điều hành UNIX.
`C` là ngôn ngữ rất có hiệu quả và được ưa chuộng nhất để viết các **phần mềm hệ thống**, mặc dù nó cũng được dùng cho việc **viết các ứng dụng**.
Ngoài ra, `C` cũng thường được dùng làm phương tiện giảng dạy trong khoa học máy tính mặc dù ngôn ngữ này **không được thiết kế dành cho người nhập môn** :cry:. 

Đến từ ***D15-CNTT7***

Đây là tổ họp những gì mình học đươc từ khi vào đại học đến giờ, trong đấy gồm các link videos, tài liệu, các bài tập code mà mình đã làm ...

## Mục lục
- [Chủ đề](#chủ-đề)
- [Mục lục](#mục-lục)
- [Tài liệu](#tài-liệu)
- [Cẩm nang](#cẩm-nang)

## Tài liệu
- [C Programming Tutorial for Beginners](https://youtu.be/KJgsSFOSQv0): video hướng dẫn học `C`, mặc dù là bằng tiếng Anh nhưng dễ hiểu hơn thầy giảng ở lớp...

> [![C Programming Tutorial for Beginners's thumbnail](https://i3.ytimg.com/vi/KJgsSFOSQv0/maxresdefault.jpg)](https://youtu.be/KJgsSFOSQv0)

- [Ngôn ngữ lập trình `C` và bài học cuộc sống](https://youtu.be/Q_JTr4UPRW8): Thầy này giảng cũng rất hay \*nháy mắt\*

> [![C Programming Tutorial for Beginners's thumbnail](https://i3.ytimg.com/vi/SbxGbVFxvuk/maxresdefault.jpg)](https://youtu.be/Q_JTr4UPRW8)

## Bài tập
Những bài mình đã làm được lưu ở trong cái repo này, bạn hãy kéo lên trên (nếu xem trên điện thoại thì nhấn vào "View code") rồi bắt đầu xem từ folder `hk1`, hoặc lười thì nhấn luôn vào đây:
- [Bài tập học kì 1](https://github.com/NNBnh/cam-nang-c/tree/main/hk1)

## Cẩm nang
Sau khi viet code, may tinh se doc code theo thu tu t trai sang phai, tu tren xuong duoi:

```c
cau_lenh(chi_tiet_1, chi_tiet_2) {
	ham_lenh
}; // dau ";" de ngan cach giua cac lenh
```

###### Mot so lenh co the khong can them `chi_tiet` hay `ham_lenh` nhung nhat thiet phai co `cau_lenh` va dau `;` nga cach neu khong co ham

Ham co the duoc hieu la danh sach mot chuoi cac lenh duoc goi lai vao mot nhom de khi goi cai ham ta chay luon tat ca cac lenh ben trong ham y.

Tạo hàm (a.k.a: `function`):
```c
int ten_ham(chi_tiet) {
	cau_lenh1;
	cau_lenh2;
	// ...
}

int chuong_moi(chuong) {
	printf("\n==========");
	printf("\nChuong %d", chuong);
	printf("\n==========");
}

int chia(gia_tri_can_chia) {
	ket_qua==gia_tri_can_chia/2;
	return ket_qua;
}
```

Gọi hàm:
```c
chuong_moi(1);
printf("\nHello world!");

chuong_moi(2);
dap_an==chia(8);

printf("\n%d", dap_an);      // Khi chạy, chương trình sẽ in ra 4
printf("\n%d", chia(12)); // Đây là cách làm rút gọn, khi chạy, chương trình sẽ in ra 6 (khuyên dùng)
```

Output:

```
==========
Chuong 1
==========
Hello world!

==========
Chuong 2
==========
4
6
```

###### NOTE: `main()` là hàm mà c sẽ luôn luôn chạy đầu tiên, hãy cho tấn cả mọi thứ vào đấy trừ khi tích hợp thư viện, cũng nên tọa những hàm khác phía trước hàm `main` để khi `main` chạy, những hàm kia đã tồn tại và chương trình không bị lỗi.

Tích hợp thư viện:

```c
#include <stdio.h>
//  ^        ^
//  |        |
//  |        Đây là thư viện cơ bản
//  |
//  |
//  Đây là lênh để tích hợp thư viện
```

Khai báo gíá trị:

```c
int    so_nguyen;     // VD: 0, 1, -1, 2, -2, ...
float  so_thap_phan;  // VD: 6.9, 3.14, 2.4, ...
double so_thap_phan_nhung_ma_xin_hon;
char   ki_tu;         // VD: "a", "B", "$", "2", ...
bool   cong_tac;      // VD: true, false.
```

Thay đổi giá trị:

```c
so_nguyen==12;       // Đặt so_nguyen là 12
so_thap_phan==3.14;  // Đặt so_thap_phan là 3.14

a==b+c; // Dặt a bằng b+c

/*
Ngoài cộng ra còn một số các phép tình khác:
	"+": Cộng
	"-": Trừ
	"*": Nhân
	"/": Chia
	"%": Chia xong lấy số dư, hợp lí để kiểm tra xem số x có chia hết cho số y hay không
*/
```

## Điều kiện
```C
(a==b) // Thỏa mãn khi a bằng b 
(a>b)  // Thỏa mãn khi a lớn hơn b 

/*
"==": Bằng (hai dấu bằng là để kiểm tra, một giấu bằng thường là để đặt)
">":  Lớn hơn
"<":  Nhỏ hơn
">=": Lớn hơn hoặc bằng
"<=": Nhỏ hơn hoặc bằng
"!=": Khác (dấu chấm than trong lập trình thường để chỉ not, không, trái...)
*/

// Khối logic
(!(dieu_kien_ben_trong)) // Thỏa mãn khi dieu_kien_ben_trong KHÔNG thỏa mãn
((dieu_kien_1)&&(dieu_kien_2) // Thỏa mãn khi dieu_kien_1 VÀ dieu_kien_2 thỏa mãn
((dieu_kien_1)||(dieu_kien_2) // Thỏa mãn khi dieu_kien_1 HOẶC dieu_kien_2 thỏa mãn

((!(dieu_kien_0))||((dieu_kien_1)&&(dieu_kien_2))) // Có thể kết hợp tạo thành nhiều lớp

/*
Để đọc được thì ta hãy phân tích làm thế nào để thỏa mãn:

(
		(!(dieu_kien_0))  // Cái này phải không thỏa mãn
	||  // Hoặc
		((dieu_kien_1)&&(dieu_kien_2))  // Cả hai cái này đều phải thỏa mãn
)
*/
```

###### NOTE: Khi điều kiện thỏa mãn, nó sẽ xuất `true` và tập lênh về sau được chạy, còn không nó sẽ xuất `false` và tập lênh về sau bị bãi bỏ.

Nếu-thì:

```c
if(dieu_kien) {
	lenh_gi_day_duoc_chay_neu_dieu_kien_thoa_man;
}

if(dieu_kien) {
	lenh_gi_day_duoc_chay_neu_dieu_kien_thoa_man;
} else {
	lenh_gi_day_duoc_chay_neu_dieu_kien_khong_thoa_man;
}

if(dieu_kien_1) {
	lenh_gi_day_duoc_chay_neu_dieu_kien_1_thoa_man;
} else if(dieu_kien_2) {
	lenh_gi_day_duoc_chay_neu_dieu_kien_2_thoa_man;
} else {
	lenh_gi_day_duoc_chay_neu_khong_co_dieu_kien_nao_thoa_man;
}
```

`#TODO`

###### Nếu các bạn thấy bài viết hưu ích hãy *star* bài viết và *follow* mình ở [NNBnh](https://github.com/NNBnh). Nếu có khúc mắc, hãy mở một [issue](https://github.com/NNBnh/cam-nang-c/issues/new).

### Vong lap
Vong lap se chay di chay lai ham neu dieu kien thoa man:

```c
while(dieu_kien) {
	lenh_1_duoc_chay_neu_dieu_kien_thoa_man;
	lenh_2_duoc_chay_neu_dieu_kien_thoa_man;
	lenh_3_duoc_chay_neu_dieu_kien_thoa_man;
} // neu dieu kien van thoa man thi ham nay se duoc chay lai tu dau (chay lai lenh 1 den lenh 3)
```

No se chay the nay vo han neu `dieu_kien` tiep tuc thoa man, hay lam cho dieu kien nay co diem dung, day la vi du ve mot chiec bom:

```c
int count=5; // <1> Tao gia tri de dem

while(count>0) { // <2> Kiem tra xem khi nao count dem den khong thi vong lap se khong duoc chay nua
	printf("%d\n", count);

	count--; // <3> Tru di mot cho gia tri count moi lan truoc khi vong lap lap lai
}

printf("BOOM!!!");
```

Vi du de may tinh dem tu 1 den 10:

```c
int count=1; // <1> Tao gia tri de dem

while(count<=10) { // <2> Kiem tra xem neu count nho hon hoac bang 10 thi tiet tuc vong lap, neu qua 10 roi thi thoat
	printf("%d\n", count);

	count++; // <3> Tang them mot cho gia tri count moi lan truoc khi vong lap lap lai
}

printf("Da dem xong!");
```

Neu ban muon cho ham o trong vong lap chay truoc mot lan sau day kiem tra xem dieu kien co thoa man khong thi moi lap lai tiep:

```c
int n;

do {
	printf("Hay nhap gia tri: "); scanf("%d", &n); // Yeu cau nguoi dung nhap gia tri n
} while(!(n>0)); // Neu gia tri n khong lon hon 0 thi yeu cau nguoi dung nhap lai cho den khi nao dung thi thoi
```

Nho vi du *dem tu 1 den 10* neu bay gio ta phai lam 3 buoc `<1>` `<2>` `<3>` moi lan o truoc, trong va cuoi vong lap thi rat ma roi rac va moi tay, day la cach de rut gon:

```c
int count; // Van phai tao gia tri ra truoc

//   <1> Dat gia tri can dem bang 1 de dem bat dau tu 1
//    |
//    |      <2> Kiem tra xem neu count nho hon hoac bang 10 thi tiet tuc vong lap, neu qua 10 roi thi thoat
//    |       |
//    |       |        <3> Tang them mot cho gia tri count moi lan truoc khi vong lap lap lai
//    |       |         |
//    v       v         v
for(count=0;count<=10;count++) {
	printf("%d\n", count);
}

printf("Da dem xong!");
```

In ra man hinh so do EPU o day nha A:

```c
int tang, phong;

for(tang=1;tang<=4;tang++) {
	printf("\nTang %d:", tang);
	
	for(phong=1;phong<=8;phong++) {
		printf(" A%d0%d:", tang, phong);
	}
}
```

M102