#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int min = 0, max = 0;
    int num1 = 0, num2 = 0;
    int sum = 0;
    int count;
    int s = 0;
    int b = 0;
    cin >> min >> max;

    for (int i = min; i <= max; i++)
    {
        num1 = i;
        num2 = i;
        count = 0;
        sum = 0; // 這裡沒寫

        while (num1 > 0)
        {
            count++;
            num1 = num1 / 10;
        }

        while (num2 > 0)
        {
            s = num2 % 10; //這裡不用放數字陣列s[]no s yes
            num2 = num2 / 10;
            sum += pow(s, count);
        }

        if (i == sum)         //這邊不能加else { b =0 }
        {                     //跑到最後999會失敗 會等於0
            cout << i << " "; //跑出正確數字完還會多一個none
            b++;
        } //這個要在回圈裡
    }

    if (b == 0) //這個要在回圈外
    {
        cout << "none" << endl;
    }
    return 0;
}

/*思考邏輯 看到題目第一個想法就知道要用迴圈解
再來要判斷符合這個阿姆斯壯數是幾位數（定義3位數是個位數的3次方）
開始計算 i 跟 sum(符合各位數的三次方加起來是否跟i相同)的數值
if相同 就cout <<  如果有的話就讓他有個計數器 最後在
if計數器等於0 那就none */
