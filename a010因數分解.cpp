#include<stdio.h> 
int main(){
	int num=0,n=2,s=0;
	scanf("%d",&num);
	while(num >= n){
		if(num%n==0){
			s = 0;
			while(num%n==0){
			num = num/n ;
			s++ ;				
			}
		if(s == 1){
			printf("%d",n);
		}else{
			printf("%d^%d",n,s);
		}
		if(num != 1){
			printf(" * ");	
		}

		}
		n++;
	}
	return 0 ;
}
