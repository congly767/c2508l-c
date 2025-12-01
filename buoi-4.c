#include <stdio.h>
#include <stdbool.h>

int main(){
	
//	int x = 4;
//	printf("%d \n", x < 5 && x < 10);
//	printf("%d \n", x < 5 || x < 10);
//	printf("%d \n", !(x < 5 || x < 10));
	
//	bool isHandsome = false;
//	printf("%d", isHandsome); 

//    int x = 5;
//    if(x > 10){
//	// khoi code nay duoc thuc thi neu dieu kien tren la true
//	    printf("x > 10");
//	    
//	}else{
//		printf("x <= 10");
//	}

// Viet chuong trinh kiem tra so chan, le
    
   
//    int x;
//	printf("Nhap 1 so nguyen bat ki: ");
//	scanf("%d", &x);
//	
//	 if(x > 0){
//	 	if(x % 2 ==0){
//	 		printf("x la so chan");
//		 }else{
//		 	printf("x la so le");
//		 	
//		 }
//	}else{
//		printf("Gia tri nhap vao khong hop le!");
//	}

// Giai phuong trinh bac 1: ax + b = 0
//Neu (a == 0 && b != 0) => Phuong trinh vo nghiem
//Neu (a == 0 &&b == 0) => Phuong trinh vo so nghiem
// x = -b / a

//float a, b, x;
//    printf("Nhap so a ");
//    scanf("%f", &a);
//    printf("Nhap so b ");
//    scanf("%f", &b);
//    
//    if(a == 0){
//    	if(b != 0){
//    		printf("Phuong trinh vo nghiem");
//		}else{
//			//Truong hop b = 0
//			printf("Phuong trinh vo so nghiem");
//			
//		}
//	}else{
//		//Truong hop a != 0
//		x = -b / a;
//		printf("Nghiem x la: %.2f", x);
//	}
    
    
    
//    if(a == 0 && b != 0){
//    	printf("Phuong trinh vo nghiem");
//	}else if(a == 0 & b == 0){
//		printf("Phuong trinh vo so nghiem");
//	}else{
//		x = -b / a;
//		printf("Nghiem x la: %.2f", x);
//		
//	}

//Viet chuong trinh nhap vao a, b va tim ra so lon nhat
int a, b, max;
    printf("Nhap so nguyen a ");
    scanf("%d", &a);
    printf("Nhap so nguyen b ");
    scanf("%d", &b);
    
    max = a;
//if(b > a){
//	max = b;
//	
//}

//Cu phap short hand cua if(chi viet duoc khi co 1 dong lenh o ben tren)
  max = (b > a) ? b : a;
	printf("So lon nhat la: %d", max);
	
	
	return 0;
}
