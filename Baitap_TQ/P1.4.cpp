#include<stdio.h>
int main(){
	char ten[20],xeploai[20];
	float toan, van,tin,DTB;
	printf("nhap ten:");scanf("%s",&ten);
	fflush(stdin);
	printf("nhap diem toan:");scanf("%f",&toan);
	printf("nhap diem van:");scanf("%f",&van);
	printf("nhap diem tin:");scanf("%f",&tin);
	DTB=(toan+van+tin)/3;
	if(DTB<5){
		printf(xeploai,"yeu\n");
	}
	else if(5<=DTB && DTB<7){
		printf("xeploai:trungbinh\n");
	}
	else if(7<=DTB && DTB<8){
		printf("xeploai:kha\n");
	}
	else {
		printf("xeploai:gioi\n");
	}
	printf("Ten:%s DTB:%.1f ",ten,DTB);
	return 0;
} 
