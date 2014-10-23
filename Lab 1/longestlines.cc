#include <string>
#include <iostream>
using namespace std;

int main() {
        string s;
        string longest;
        while (getline(cin, s))
            if (s.size > longest.size())
                longest = s;
        cout << longest << '\n';
        return 0;
}
