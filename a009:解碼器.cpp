#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    for (int i = 0; i < word.size(); i++)
    {
        word[i] -= 7;
    }

    cout << word << endl;

    return 0;
}