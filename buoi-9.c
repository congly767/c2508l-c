#include <stdio.h>

// Dinh nghia ham truoc khi no duoc goi
// TH 1: ham co tra ve du lieu
// a, b duoc goi la tham so(parameters)
//int tinhTong(a, b){
//	
//	
//	
//	
//	
//	return a + b;
//}
////TH 2: ham khong co tra ve du lieu
//void sayHello(){
//	printf("Hello");
//}

// thong thuong nguoi ta su dung function protptype (nguyen mau ham)
// giup cho code c de quan ly hon

int main(){
	
	
//	int a = 1, b = 2;
	//khi goi ham, du lieu truyen vao ham duoc goi la doi so cua ham(argurment)
//	tinhTong(a, b); 

/*
    Mang (Array)
*/
	//Khai bao mang a co 100 phan tu kieu so nguyen
//	int a[100];
	
	//khoi tao mang
//	int a[5] = {0};
//	printf("a[0] = %d \n", a[0]); // index/vi tri/chi muc
//	printf("a[1] = %d \n", a[1]);
//	printf("a[2] = %d \n", a[2]);
//	printf("a[3] = %d \n", a[3]);
//	printf("a[4] = %d \n", a[4]);
	
	
	/*
	Khong thao tac tinh toan den cac phan tu trong mang khi chung chua co gia tri
	Neu gan gia tri cho phan tu thu 0 ma khong gan gia tri cac phan tu con lai thi chung mac dinh se bi gan bang 0
	
	
	*/
	
//	int n;
//	printf("Nhap so luong phan tu cua mang: ");
//	scanf("%d", &n);
//	
//	int a[n]; //Cap phat dong
	
//	a[0] = 100;
//	
//	printf("a[0] = %d", a[0]);
//	printf("size of: %d", sizeof a);
	
	//Nhap mang bang vong lap for
//	int i;
//	for(i = 0; i < 5; i++){
//		printf("Nhap phan tu thu: %d \n", i);
//		scanf("%d", &a[i]);
//	}
//	
//	//xuat mang
//	for(i = 0; i < n; i++){
//		printf("a[%d] = %d \n", i, a[i]);
//	}
	
	
	//Bai tap tinh tong cac phan tu trong mang biet rang mang co 5 phan tu 
	//la kieu so nguyen gia tri cua cac phan tu nguoi dung tu nhap tu ban phim
	
	
//	int a[5], i, tong = 0;
//	for(i = 0; i < 5; i++){
//		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
//		
//		tong += a[i];
//	}
//	printf("Tong la %d", tong);
	
	
	//bai tap tinh tong cac phan tu co vi tri chan trong mang
	
//		int a[5], i, tong = 0;
//	for(i = 0; i < 5; i++){
//		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
//		
//		if(i % 2 == 0 && i != 0);
//		tong += a[i];
//	}	
//		
//	printf("Tong la cua cac phan tu chan la %d", tong);
	
	
	//bai tap tinh tong cac phan tu co gia tri la so chan trong mang. 
	
	
	int a[5], i, tong = 0;
	for(i = 0; i < 5; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0){
			tong += a[i];
		}
		
	}	
	printf("Tinh tong %d", tong);
	
	
	
	
	
	return 0;
}
