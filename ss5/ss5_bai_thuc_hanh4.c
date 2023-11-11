#include<stdio.h>
#include<math.h>
float main(){
	float x, y;
	printf("nhap thu nhap tinh thue? ");//don vi trieu dong
	scanf("%f",&x);
	if(x>0&&x<=5){
		y=x*0.95;
	} else if(x>5&&x<=10){
		y=x*0.9;
	} else if(x>10&&x<=18){
		y=x*0.85;
	} else if(x>18&&x<=32){
		y=x*0.8;
	} else if(x>32&&x<=52){
		y=x*0.75;
	} else if (x>52&&x<=80){
		y=x*0.7;
	} else if(x>80){
		y=x*0.65;
	}
	printf("luong thuc te là: %f trieu",y);
} 


