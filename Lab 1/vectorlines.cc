#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
        string s;
        vector<string> stringContainer;
        while (getline(cin, s))
            stringContainer.push_back(s);
        for (int i = stringContainer.size() - 1; i >= 0; i--)
            cout << stringContainer[i] << '\n';
        return 0;
}
