#include <string>
#include <iostream>
using namespace std;

int main() {
        string s;
	int count=0;
        while (cin >> s)
		count++;
                cout << count << '\n';
	while (getline(cin, s))
		cout << s.size() << '\t' << s << '\n';
        return 0;
}

istream& getline(istream& in, string &s) {
	s.erase();
	char c;
	while (in.get(c) && c != '\n')
		s += c;
	return in;
}
