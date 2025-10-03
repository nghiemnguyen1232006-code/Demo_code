#include<stdio.h>
int main(){
	float tiengui,ls,tn;
	int thang;
	printf("nhap tien gui:");scanf("%f",&tiengui);
	printf("Nhap lai suat:"); scanf("%f",&ls);
	printf("Nhap thang:"); scanf("%d",&thang);
	for(int i=1;i<=thang;i++){
		tiengui=tiengui +tiengui*ls/100; 
	}
	printf("so tien nhan duoc la: %f",tiengui) ;
	return 0; 
} 
