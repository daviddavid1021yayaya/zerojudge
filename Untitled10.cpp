#include <stdio.h>
int main()
{
    int num;
    for (num = 1; num <= 1000 ; ++num) //1000 loop
    {
        int temp = num; //store single values
        char romanNum[1000]; 
        int i = 0; //to increment romanNum[i] //inside because it's getting increment inside the loop
        int j; //for looping separate values
        //1000=M, 500=D, 100=C, 50=L, 10=X, 5=V, 1=I
        while(temp>0) 
        {       
            if(temp>= 1000)//1000 (highest number)=M
            {  
                for(j=0;j<(temp/1000);j++) //0<1 
                romanNum[i++] = 'M'; //1000=M               
            temp = temp - (temp/1000) * 1000; //0
            }
            else if(temp >=500)//999..500
            {   
                if(temp < (500 + 4 * 100))//500..899
                {                   
                    for(j=0;j<(temp/500);j++)
                    romanNum[i++] = 'D';//
                temp = temp - (temp/500) * 500; //0         
                }
                else//900..999
                { 
                    romanNum[i++] = 'C'; 
                    romanNum[i++] = 'M'; 
                temp = temp - (1000-100);  //0
                }
            }
            else if(temp>=100) //499..100
            {   
                if(temp < (100 + 3 * 100))//100..399
                {
                    for(j=0;j<(temp/100);j++)
                    romanNum[i++] = 'C'; //
                temp = temp - (temp/100) * 100;
                }
                else //400..499
                {   
                    romanNum[i++] = 'L';
                    romanNum[i++] = 'D';
                temp = temp - (500-100);
                }
            }
            else if(temp >=50) //99..50
            {
                if(temp < (50 + 4 * 10))//50..89
                {
                    for(j=0;j<(temp/50);j++)
                    romanNum[i++] = 'L';
                temp = temp - (temp/50) * 50;
                }
                else //90..99
                {
                    romanNum[i++] = 'X';
                    romanNum[i++] = 'C';
                temp = temp - (100-10);
                }
            }
            else if(temp >=10)//49..10
            {
                if(temp < (10 + 3 * 10))//10..39
                {
                    for(j=0;j<(temp/10);j++)
                    romanNum[i++] = 'X';
                temp = temp - (temp/10) * 10;//0
                }
                else//40..49
                {
                    romanNum[i++] = 'X';
                    romanNum[i++] = 'L';
                temp = temp - (50-10);
                }
            }
            else if(temp >=5)//9..5
            {
                if(temp < (5 + 4 * 1))//5..8
                {
                    for(j=0;j<(temp/5);j++)
                    romanNum[i++] = 'V';
                temp = temp - (temp/5) * 5;//0
                }
                else//9
                {
                    romanNum[i++] = 'I';
                    romanNum[i++] = 'X';
                temp = temp - (10-1);//0
                }
            }
            else if(temp >=1)//4..1
            {
                if(temp < 4)//1..3
                {               
                    for(j=0;j<(temp/1);j++)
                    romanNum[i++] = 'I';
                temp = temp - (temp/1) * 1;
                }
                else//4
                {   
                    romanNum[i++] = 'I';
                    romanNum[i++] = 'V';
                temp = temp - (5-1);//0
                }
            }
        }
        printf("%d ", num);//1..1000

        for(j=0;j<i;j++)//to print romanNum
        {
            printf("%c",romanNum[j]);//I..M
        }
        printf("\n");
    }//end of 1000 loop

    return 0;

}
