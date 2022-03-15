#include <iostream>
#include <string>
using namespace std;
int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string s("david");
    string s2("david", 2);
    string s3 = "alex";
    cout << "====================================" << endl;
    cout << "s size : " << s.size() << endl;
    cout << "s2  : " << s2 << endl;
    cout << "s2 size : " << s2.size() << endl;
    cout << "s2 size : " << s2.size() * 4 << endl;
    cout << "s2 length : " << s2.length() << endl;
    cout << "s3 :" << s3 << endl;

    return 0;
}