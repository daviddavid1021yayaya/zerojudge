#include<iostream>
#include<string> 
using namespace std;
int main(){
	int a=0,b=0,c=1,d=1;
	while(cin >> a >> b){
		while(c != 0 && d != 0){
			if(a >= b){
				c = a%b;
				a = c;
			}else{
				d = b%a;
				b = d;
			}
		}break;	
	}
	(c == 0)? cout<<b<<endl : cout<< a << endl;


	return 0 ;
}
