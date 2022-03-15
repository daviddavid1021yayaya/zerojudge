#include<iostream>
using namespace std;

int main(){
	 char a, b[11];

    int sum=0,i;

    cin>>a;

    for (i=2; i<11; i++)

    cin>>b[i];

    b[0]=1;

    if(a=='I')

    {

        b[0]=3;

        b[1]=4;

    }

    else if(a=='O')

    {

        b[0]=3;

        b[1]=5;

    }

    else if(a=='W')

    {

        b[0]=3;

        b[1]=2;

    }

    else if(a=='Z')

    {

        b[0]=3;

        b[1]=3;

    }

    else if (a<='H')

        b[1]=a-'A';

    else if (a<='N')

        b[1]=a-'A'-1;

    else if (a<='V')

        b[1]=a-'A'-2;

    else if (a<='Y')

        b[1]=a-'A'-3;

    while(b[1]>9)

    {

        b[0]+=1;

        b[1]-=10;

    }

    for (i=2; i<10; i++)

            sum+=(b[i]-48)*(10-i);

    sum=sum+b[0]+b[1]*9+b[10]-48;

    if(sum%10==0)

        cout<<"real";

    else

        cout<<"fake";
	
	return 0 ;
}
