#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    int count=0;
    while (cin >> s)
        count++;
    cout << count << '\n';
    return 0;
}
