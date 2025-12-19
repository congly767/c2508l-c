#include<stdio.h>
#include<string.h>

int main(){
	/*
	 String (chuoi): mang cac ky tu
	*/
	//char str[1000]; // khai bao
//	char str[1000] = "Ly Thanh Cong";
//	printf("%s", str);

//    char name[1000];
//	printf("Nhap ho va ten: ");
////	scanf("%s", name);
//	fgets(name, sizeof(name), stdin);
//	
//	printf("Ho ten la: %s", name); 
	
	
	char str[1000] = "Hello World";
//	printf("%d", sizeof(str));
//    printf("Ky tu dau tien la: %c \n", str[0]);
//    printf("Ky tu cuoi cung la: %c \n", str[4]);
	
	//Luu y: o trong C vi tri cuoi cung la "\0" danh dau su ket thuc cua chuoi
	
//	int i = 0;
//	for(i = 0; i < 5; i++){
//		printf("%c \n", str[i]);
//	}
	
	
//	while(str[i] != '\0'){
//		i++;
//	}
//	
//	printf("So luong ky tu la: %d \n", i);//ket qua la 11
//	printf("So luong ky tu la: %d", strlen(str));
//	
    int i, count;
    for(i = 0; i < strlen(str); i++){
    	int phanTuCuoiCung = strlen(str) - 1; //do dai cua str - 1 se la vi tri cuoi cung 
    	if(str[phanTuCuoiCung] == 'o'){
//    		printf("Co xuat hien ky tu o tai vi tri %d \n", i);
//          break;
    		count++;
		}
	}
	printf("Co %d ky tu o duoc tim thay", count);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
