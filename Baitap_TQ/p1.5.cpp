#include<stdio.h>
int main(){
	char ten[20];
	float thangdiem10; 
	printf("nhap ten:");scanf("%s",&ten);
	fflush(stdin);
	printf("nhap diem 10:");scanf("%f",&thangdiem10);
	
	if(thangdiem10>=9){
		printf("thang diem 4:4   thang diem chu:A+ ");
	}
	else if(thangdiem10>=8 && thangdiem10<9){
		printf("thang diem 4:3.5   thang diem chu:A");
	}
	else if(thangdiem10>=7 && thangdiem10<8){
		printf("thang diem 4:3   thang diem chu:B+");
	}
	else if(thangdiem10>=6 && thangdiem10<7){
		printf("thang diem 4:2.5   thang diem chu:B");
	}
	else if(thangdiem10>=5 && thangdiem10<6){
		printf("thang diem 4:2   thang diem chu:C");
	}
	else if(thangdiem10>=4 && thangdiem10<5){
		printf("thang diem 4:1.5   thang diem chu:D");
	}
	else {
		printf("thang diem 4:1.0   thang diem chu:F");
	} 
	return 0;
} 
