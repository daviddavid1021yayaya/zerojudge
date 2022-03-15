#include<stdio.h>

#include<string.h>

void print(int n,int len) {

if(n == len) 

printf("yes");

else 

printf("no");

}

int main () {

char s[1000];

int q = 0;

scanf("%s",s);

for(int i = 0; i < strlen(s)/2; i++) 

if(s[i] == s[strlen(s)-i-1]) 

q++;

print(q,strlen(s)/2);

return 0;

}
