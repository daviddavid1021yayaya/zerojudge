#include<stdio.h> 
int main(){
	int num=0,n=2,s=0;
	scanf("%d",&num);
	while(num >= n){
		if(num % n == 0 ){
			s = 0;                   //這裡放s = 0太扯  if 算的數字是12
			while(num%n==0){         // 一輪 2之後 num會是 3  且在 2的最後一輪
				num = num/n ;        // 就已經出現 *號    s=0 可以將 1(num) = 3/3 
				s++ ;                //由於3迴圈 被清0 只算一次 就可以跟下面的12-13行的東西 
			}
			if(s == 1){             //質數只會被除盡一次  
				printf("%d",n);
			}else{
				printf("%d^%d",n,s);
			}		
			if(num != 1)
				printf(" * ");
					
		}
		n++;
	}
	return 0 ;
}













/*
#include<stdio.h> 
int main(){
	int num=0,n=2,s=0;
	scanf("%d",&num);
	while(num >= n){
		if(num % n == 0){
			while(num % n == 0){
				num = num/n ;           //25/5=5 5/5=1
				s++ ;
			}
	    	if(num % n == 1){           //此時 num= 1 
				printf("n = %d",n);         
			}else{
				if(num % n == 0){
					printf("num = %d^%d",num,s);
				}else{
					printf("mm = * ");
				}	
			}	
		}

		n++;
	}
	return 0 ;
}
*/

