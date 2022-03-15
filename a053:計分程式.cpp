#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 0, grade = 0;

    cin >> num;
    if (num <= 10)
    {
        grade = num * 6;
    }
    else if (num >= 11 && num <= 20)
    {
        grade = 60 + (num - 10) * 2;
    }
    else if (num >= 21 && num <= 40)
    {
        grade = 80 + (num - 20) * 1;
    }
    else if (num >= 40)
    {
        grade = 100;
    }

    cout << grade << endl;
    return 0;
}
