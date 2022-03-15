#include<stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,e=0,n=0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b-a==c-b&&c-b==d-c){
			e = d + (d-c);
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}else if(b/a == c/b&&c/b == d/c){
			e = d * (d/c);
			printf("%d %d %d %d %d\n",a,b,c,d,e);	
		}
				
	}
	
	return 0;
}

/*#include<stdio.h> ¿ùªº 
int main(){
	int a=0,b=0,c=0,d=0,e=0,n=0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b-a==c-b==d-c){
			e = d + (d-c);
			printf("%d %d %d %d %d\n",a,b,c,d,e);
		}else if(b/a == c/b == d/c){
			e = d * (d/c);
			printf("%d %d %d %d %d\n",a,b,c,d,e);	
		}
				
	}
	
	return 0;
}
*/

