#include<stdio.h>
int main(){
	char a[20];
	float sodiencu,sodienmoi,dongia,soluong,tiendien;
	printf("Nhap ten khach hang:");
	scanf("%c",&a);
	fflush(stdin);
	printf("So dien cu: ");
	scanf("%f",&sodiencu);
	printf("So dien moi: ");
	scanf("%f", &sodienmoi);
	printf("Nhap don gia: ");
	scanf("%f",&dongia);
	
	soluong=sodienmoi-sodiencu;
	if (soluong<=100){
		tiendien=soluong*1418;
	}
	else if(soluong<=150){
		tiendien=100*1418 +(soluong-100)*1622;
	}
	else if(soluong<=200){
		tiendien=100*1418+50*1622+(soluong-150)*2044;
	}
	else if(soluong<=300){
		tiendien = 100* 1418 + 50 * 1622 + 50*2044 + (soluong - 200)*2210;
	}
	else if(soluong<=400){
		tiendien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + (soluong - 300)*2361;
	} 
	else {
		tiendien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + 100* 2361 + (soluong - 400)*2420;
	}
	printf(" Tien dien la: %.2f",tiendien);
	return 0;
}
