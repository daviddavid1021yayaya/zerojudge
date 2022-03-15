#include<stdio.h>
#include<math.h>

int main(){
	int a=0,b=0,c=0;
	int x1=0,x2=0,x=0;
	scanf("%d %d %d",&a,&b,&c);
	if((b*b-4*a*c)>0){
		x1 = ((-b)+sqrt(b*b-4*a*c))/(2*a);
		x2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);
		printf("Two different roots x1=%d , x2=%d",x1,x2);
	}else if((b*b-4*a*c)==0){
		x = (-b)/(2*a);
		printf("Two same roots x=%d",x);
	}else{
		printf("No real root");
	}

	return 0 ;
}

/*錯的版本 
#include<stdio.h>
#include<math.h > //這裡不能有空格 

int main(){
	int a=0,b=0,c=0;
	float x1=0,x2=0,x=0;          //他要整數 
	scanf("%d %d %d",&a,&b,&c);
	if((b*b-4*a*c)>0){
		x1 = ((-b)+sqrt(b*b-4*a*c))/(2*a);
		x2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);
		printf("Two different roots x1=%d , x2=%d",x1,x2);
	}else if((b*b-4*a*c)==0){
		x = (-b)/(2*a);
		printf("Two same roots x=%d",x);
	}else{
		printf("No real root");
	}

	return 0 ;
} 
*/ 
