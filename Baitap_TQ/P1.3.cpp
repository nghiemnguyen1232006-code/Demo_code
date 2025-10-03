#include<stdio.h>
int main(){
	int thang,nam,songay;
	printf("nhap nam:");scanf("%d",&nam);
	printf("nhap thang:");scanf("%d",&thang);
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
		songay=31;
	} 
	else if(thang==4,thang==6,thang==9){
		songay=30;
	} 
	else if (thang==2){
		if((nam%4==0 && nam/100 !=0 )||(nam%400==0)){
			songay=29;
		}
		else{
			songay=28;
		}
	}
	else{
		songay=0;
	}
	printf("so ngay cua thang %d",songay);
	return 0;
	
} 
