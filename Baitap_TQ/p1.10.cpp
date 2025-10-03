#include<stdio.h>
int main(){
	float tn,ls,tienbandau;
	int sothang;
	printf("Nhap so tien nhan:");scanf("%f",&tn);
	printf("Nhap lai suat:");scanf("%f",&ls);
	printf("Nhap so thang:");scanf("%d",&sothang); 
	tienbandau=tn; 
     for(int i=1;i<=sothang;i++){
     	tienbandau=tienbandau/(1+(ls/100));
	 } 
	printf("so tien it nhat phai gui:%f",tienbandau);
	return 0; 
} 
