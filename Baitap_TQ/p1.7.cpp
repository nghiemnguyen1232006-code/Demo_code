#include<stdio.h>
int main(){
	float tg,tn,ls;
	int sothang; 
	printf("nhap tien gui:"); scanf("%f",&tg);
	printf("nhap tien nhan:"); scanf("%f",&tn);
	printf("nhap lai suat:"); scanf("%f",&ls);
	 sothang=0;
	 while(tg<tn) {
	 	tg=tg+tg*ls/100;
		 sothang=sothang+1; 
	 }
	 printf("so thang it nhat phai gui: %d",sothang);
	 return 0; 
} 
