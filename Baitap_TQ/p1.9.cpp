#include<stdio.h>
int main(){
	int n;
	int kq=1;
	 printf("nhap so n:"); scanf("%d",&n);
	 if(n<0 ){
	 	printf("khong tinh duoc gia tri n!!\n");
		 return 0; 
	 } 
	 for(int i=n;i>0;i=i-2) {
	 	kq=kq*i; 
	 }
	 printf("%d!!=%d",n,kq);
	 return 0; 
} 
