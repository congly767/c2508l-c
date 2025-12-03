#include <stdio.h>

int main(){
	
//	int a, b, tam;
//	printf("Nhap so nguyen a: ");
//	scanf("%d", &a);
//	printf("Nhap so nguyen b: ");
//	scanf("%d", &b);
//    printf("Nhap a, b: ");
//    scanf("%d%d", &a, &b);
//	
//	if(a > b){
//		tam = a;
//		a = b;
//		b = tam;
//		printf("Gia tri cua a la: %d \n", a);
//		printf("Gia tri cua b la: %d \n", b);
//	}
//	
//	printf("Gia tri cua a la: %d, b la: %d", a, b);



//    int a, b;
//    printf("Nhap a, b: ");
//    scanf("%d%d", &a, &b);
//    
//    if(a == b){
//    	printf("a bang b");
//	}else{
//		printf("a khac b");
//	}

//    char c;
//    printf("Nhap ky tu c: ");
//    scanf("%c", &c);
//    
//    if(c >= 'a' && c <= 'z'){
//    	c = c - 32;
//    	printf("Ky tu hoa = %c", c);
//	}else{
//		printf("Ky tu vua nhap = %c", c);
//	}


//    char c;
//    printf("Nhap 1 ky tu: ");
//    scanf("%c", &c);
//    
//    if(c >= 'a' && c <= 'z'){
//    	c = c - 32;
//    	printf("Ky tu hoa cua c la %c ", c);
//    }else if(c >= 'A' && c <= 'Z'){
//    	c = c + 32;
//    	printf("Ky tu viet thuong cua c la %c");
//	}else if(c >= '0' && c <= '9');{
//	    printf("Ky tu chung ta vua nhap la so %c", c);
//	}else{
//		printf("Chung ta da nhap ky tu %c");
//	}
			
//	float giaVe = 50000;
//	int tuoi;
//	
//	printf("Nhap tuoi: ");
//	scanf("%d", &tuoi);
//	
//	if(tuoi < 6){
//		giaVe -= giaVe * 0.5;
//	}else if(tuoi < 11){
//		giaVe -= giaVe * 0.3;
//	}else if(tuoi <= 15){
//		giaVe -= giaVe * 0.15;
//	}
//	
//    printf("Tien ve cua ban la: %d", giaVe);

    
    float diem;
    printf("Nhap diem cua ban vao: ");
    scanf("%f", &diem);
    
    if(diem >= 0 && diem <= 10){
    	if(diem >= 9){
    	printf("Xep vao loai xuat sac");
	}else if(diem >= 8){
		printf("Xep vao loai gioi");
	}else if(diem >= 7){
		printf("Xep vao loai kha");
	}else if(diem >= 6){
		printf("Xep vao loai trung binh kha");
    }else if(diem >= 5){
    	printf("Xep vao loai trung binh");
	}else{
		printf("Xep vao loai yeu");
    }
    
    
		}else{
			printf("Diem khong hop le");
		}
	return 0;
}
