#include<stdio.h> 
#include<math.h> 
int main(){
	int a, b;
	printf("nhap doanh thu? "); //don vi trieu dong 
	scanf("%d",&a) ;
	if(a<=100){
		b=a*0.05;
		printf("tien hoa hong cua ban la: %d trieu dong",b);
	} else if(a>100&&a<=300) {
		b=a*0.1 ;
		printf("tien hoa hong cua ban la: %d trieu dong",b);
	} else if(a>300){
		b=a*0.2;
		printf("tien hoa hong cua ban la: %d trieu dong",b);
	} 
} 
