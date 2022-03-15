#include<stdio.h>
int main(){
	int M=0,D=0,S=0;
	scanf("%d",&M);
	scanf("%d",&D);
	S=(M*2+D)%3 ; 
	if(S==0)
		printf("´¶³q");
	if(S==1)
		printf("¦N");
	if(S==2)
		printf("¤j¦N");
	
	
	
	return 0;
}
