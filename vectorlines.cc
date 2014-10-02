#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
        string s;
	vector<string> stringContainer;
	while (getline(cin, s))
		stringContainer.push_back(s);
	int sCSize = stringContainer.size();
	for (int i = sCSize - 1; i >= 0; i--)
		cout << stringContainer[i] << '\n';
        return 0;
}

istream& getline(istream& in, string &s) {
	s.erase();
	char c;
	while (in.get(c) && c != '\n')
		s += c;
	return in;
}
