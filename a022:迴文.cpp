#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.size() / 2; i++)
    {
        if (a[i] != a[a.size() - i - 1])
        {
            count++;
        }
    }

    (count == 0) ? cout << "yes" : cout << "no";

    return 0;
}