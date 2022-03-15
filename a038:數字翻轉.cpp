#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 0;
    int a[1000];
    cin >> num;
    int c = 0;
    while (num % 10 == 0) // 事先處理掉 乾淨的再塞進陣列
    {
        num /= 10;
        if (num == 0)
        {
            cout << "0";
            break;
        }
    }

    while (num > 0) //這個寫法蠻屌的
    {
        a[c] = num % 10;
        num = num / 10;
        c++;
    }

    for (int i = 0; i < c; i++)
    {
        cout << a[i];
    }
    return 0;
}