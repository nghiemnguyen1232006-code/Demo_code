#include<stdio.h>
#include<math.h> 
int main(){
	int n;
	bool SoNT=true; 
	printf("nhap so nguyen n:"); scanf("%d",&n);
	if(n<2){
		SoNT=false; 
	} 
	else{
		for(int i=2; i<= sqrt(n); i++){
			if(n%i==0){
				SoNT==false;
				break; 
			} 
		} 
	} 
	if(SoNT){
		printf("%d la so nguyen to.\n",n); 
	}
	else{
		printf("%d khong la so nguyen to.",n); 
	} 
	return 0; 
	    
} 
