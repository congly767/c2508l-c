#include <stdio.h>

int main(){
	
	//Cau 1
//	int n;
//	printf("Nhap so 1, 2, 3");
//	scanf("%d", &n);
//	
//	if(n == 1 || n == 2 || n == 3){
//		switch(n){
//			case 1:
//				printf("*");
//				break;
//			case 2:
//				printf("**");
//				break;
//			case 3:
//				printf("***");
//			
//		}
//	}else{
//		printf("So ban nhap khong phai la 1, 2, 3.");
//	}



//Cau 2
//int thang;
//    printf("Nhap thang: ");
//    scanf("%d", &thang);
//    
//    if(thang >= 1 && thang <= 12){
//    	switch(thang){
//    		case 1: case 2: case 3:
//    			printf("Quy 1");
//    			break;
//    		case 4: case 5: case 6:
//			    printf("Quy 2");
//				break;
//			case 7: case 8: case 9:
//			    printf("Quy 3");
//				break;
//			case 10: case 11: case 12:
//			    printf("Quy 4");
//					
//		}
//	}else{
//		printf("Thang khong hop le!");
//	}
	
	
	
	
	//Xay dung menu 2 cap
//	Chuong trinh doc truyen 'Thien long bat bo'
//	
//	1. Chuong 1
//	2. Chuong 2
//	3. Chuong 3
//	4. Chuong 4
//	
//	Moi ban nhap so chuong (1-4):
//		
//    1. Chuong 1 - Tap 1
//    2. Chuong 1 - Tap 2
//    3. Chuong 1 - Tap 3
//    
//    Moi ban nhap so tap (1-3)
//    
//    Nguoi dung nhap so 1 => In ra dong chu ban da chon "Chuong 1 - Tap 1"

//  int chuong, tap;
//  printf("Chuong trinh doc truyen 'Thien Long Bat Bo' \n");
//  printf("\n");
//  printf("1. Chuong 1 \n");
//  printf("2. Chuong 2 \n");
//  printf("3. Chuong 3 \n");
//  printf("4. Chuong 4 \n");
//  printf("\n");
//  printf("Moi ban nhap so chuong (1-4): \n");
//  scanf("%d", &chuong);
//  
//  switch(chuong){
//  	case 1:
//  		printf("1. Chuong 1 - Tap 1 \n");
//  		printf("2. Chuong 1 - Tap 2 \n");
//  		printf("3. Chuong 1 - Tap 3 \n");
//  		printf("Moi ban nhap so tap (1-3): \n");
//  		scanf("%d", &tap);
//  		printf("Ban da chon chuong %d tap %d", chuong, tap);
//  		break;
//  	case 2:
//  		printf("1. Chuong 2 - Tap 1 \n");
//  		printf("2. Chuong 2 - Tap 2 \n");
//  		printf("3. Chuong 3 - Tap 3 \n");
//  		printf("Moi ban nhap so tap (1-3): \n");
//  		scanf("%d", &tap);
//  		printf("Ban da chon chuong %d tap %d", chuong, tap);
//  		break;
//  	case 3: 
//  	    printf("1. Chuong 3 - Tap 1 \n");
//  		printf("2. Chuong 3 - Tap 2 \n");
//  		printf("3. Chuong 3 - Tap 3 \n");
//  		printf("Moi ban nhap so tap (1-3): \n");
//  		scanf("%d", &tap);
//  		printf("Ban da chon chuong %d tap %d", chuong, tap);
//  		break;
//  	case 4:
//  		printf("1. Chuong 4 - Tap 1 \n");
//  		printf("2. Chuong 4 - Tap 2 \n");
//  		printf("3. Chuong 4 - Tap 3 \n");
//  		printf("Moi ban nhap so tap (1-3): \n");
//  		scanf("%d", &tap);
//  		printf("Ban da chon chuong %d tap %d", chuong, tap);
//  		
//  }


    // Vong lap for
    // In ra man hinh cac so tu 1 - 10
    //i: index (chi muc)
    // Bieu thuc 1 chi chay 1 lan duy nhat trong vong lap for
//    int i;
//    for(i = 0; i < 10; i++){
//        printf("%d \n", i);
//	}
	
	// Co cach nao khac thoat khoi vong lap nay khong?
	// dung break;


//Bai tap 1
//In ra man hinh cac so chan tu 1 - 10
//Neu in ra cac so le thi thay dau != vao if
//if(i % 2 != 0)
//    int i;
//    for(i = 1; i <= 10; i++){
//    	if(i % 2 == 0){
//    		printf("%d \n", i);
//		}
//	}

//Doi sang so le thi thay i = 1
//    for(i = 2; i <= 10; i = i + 2){
//    		printf("%d \n", i);
//	}



//Bai 2
//Tinh tong tu 1 - n voi n nhap tu ban phim


//int n, tong = 0, i;
//
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 1; i <= n; i++){
//	tong = tong + i;
//}
//    printf("Tong la: %d", tong);

//Bai tap 3 tinh tong cac so le tu 1 - n voi nhap n tu ban phim

//int n, tong = 0, i;
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 1; i <= n; i = i + 2){
////	tong = tong + i;
//    tong += i;
//}	
//	printf("Tong la: %d", tong);
	
	
	//Bai tap 4 tinh tong cac so chang 1 - n voi nhap n tu ban phim
	
//int n, tong = 0, i;
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 0; i <= n; i = i + 2){
////	tong = tong + i;
//    tong += i;
//}	
//	printf("Tong la: %d", tong);


//Vong lap while
//while(condition){
//	//code block
//}	

//int n = 1;
//while(n <= 10){
//	printf("%d \n", n);
//	n++;
//}

//Vong lap do while
//do{
	//block code
//}while(condition)
//int n = 0;
//do{
//	printf("Hello \n");
//	n++;
//}while(n <= 10);


//int i = 0;
//for(i = 0; ;){
//	printf("Hello");
//}


//Bai tap: Su dung vong lap do while de in ra cac so 1-10 (khong in ra so 2)
int i = 1;

do{
	if(i != 2){
		printf("%d", i);
	}
	i++;
}while(i <= 10);
	
	
	
	
	
	
	
	return 0;
}
