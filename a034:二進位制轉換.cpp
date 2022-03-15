#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 0;
    int a[50];
    while (cin >> num)
    {
        int c = 0;
        while (num > 0)
        {
            a[c] = num % 2;
            num = num / 2;
            c++;
        }
        for (int i = c - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}