#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int num = 0;
    int ans = 0;
    while (cin >> num)
    {
        ans = (pow(num, 3) + (5 * num) + 6) / 6;
        cout << ans << endl;
    }

    return 0;
}