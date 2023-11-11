#include<stdio.h> 
#include<math.h>
int main(){
	int a, b;
	printf("nhap so phut da su dung? ");
	scanf("%d",&a);
	if(a<=50){
		b=a*600;
	} else if(a>50&&a<=200){
		b=(50*600)+(a-50)*400;
	} else if(a>200&&a<=400){
		b=(50*600)+(150*400)+(a-200)*200;
	} else if(a>400){
		b=(50*600)+(150*400)+(200*200)+(a-400)*100;
	} printf("so tien ban phai tra la %d VND",b);
}



