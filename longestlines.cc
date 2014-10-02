#include <string>
#include <iostream>
using namespace std;

int main() {
        string s;
	int size = 0;
	int tempsize = 0;
	while (getline(cin, s))
		tempsize = s.size();
		if (tempsize > size)
		      size = tempsize;
		      tempsize = 0;
		cout << size << '\n';
        return 0;
}

istream& getline(istream& in, string &s) {
	s.erase();
	char c;
	while (in.get(c) && c != '\n')
		s += c;
	return in;
}
