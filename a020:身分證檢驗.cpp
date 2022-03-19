#include <iostream>
#include <string>
using namespace std;
int main()
{
    int zone[] = {10, 11, 12, 13, 14, 15, 16, 17, 34,
                  18, 19, 20, 21, 22, 35, 23, 24, 25,
                  26, 27, 28, 29, 32, 30, 31, 33};

    string id;
    int number;
    while (cin >> id)
    {
        number = (zone[id[0] - 'A'] % 10) * 9 + zone[id[0] - 'A'] / 10;

        int j = 8;
        for (int i = 1; i <= 9; i++)
        {

            number = number + (id[i] - '0') * j;
            j--;
        }
        number = number + (id[9] - '0');
    }
    if (number % 10 == 0)
    {
        cout << "real";
    }
    else
    {
        cout << "fake";
    }
    return 0;
}
