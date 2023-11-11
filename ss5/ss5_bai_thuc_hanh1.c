#include<stdio.h>
#include<math.h> 
int main(){
	float a,b,c,x1,x2,delta;
	printf("nhap a, b, c? ");
	scanf("%f%f%f", &a, &b, &c);
	if(a==0){
		printf("he so a phai khac 0");	
	} else{
		delta=b*b-4*a*c;
		if(delta>0){
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("\nPhuong trinh co 2 nghiem phan biet: x1=%.2f va x2=%.2f", x1, x2);
		} else if(delta<0){
			printf("\nPhuong trinh vo nghiem");
		} else if (delta==0){
			x1=-b/(2*a);
			printf("\nPhuong trinh co hai nghiem kep x1=x2=%.2f",x1) ;
		}
	}
}
