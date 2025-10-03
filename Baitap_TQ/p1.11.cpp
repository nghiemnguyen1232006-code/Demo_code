#include<stdio.h>
int main(){
	int test;
	printf("Nhap so bo test: ");scanf("%d",&test);
	while (test--){
		int gia, tiendua;
		printf("nhap gia san pham va nhap tien dua:");
		scanf("%d %d",&gia,&tiendua);
		int tienthua= tiendua-gia;
		int to10,to5,to1;
		to10=tienthua/10;
		tienthua=tienthua %10;
		if (tienthua>=5){
			to5=1;
			tienthua=tienthua-5;
		}else{
			to5=0; 
		
	    } 
	    to1=tienthua;
		printf("%d - %d = %d = (%d * 10) + (%d * 5) + (%d * 1)\n",tiendua,gia,tiendua-gia,to10,to5,to1); 
		}
		return 0; 
	} 
 
