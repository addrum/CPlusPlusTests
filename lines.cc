#include <string>
#include <iostream>
using namespace std;

int main() {
        string s;
	int count = 0;
	while (getline(cin, s))
		count++;
		cout << count << '\n';
        return 0;
}

istream& getline(istream& in, string &s) {
	s.erase();
	char c;
	while (in.get(c) && c != '\n')
		s += c;
	return in;
}
