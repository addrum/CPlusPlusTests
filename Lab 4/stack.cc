#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename Item>
class stack {
	vector<Item> v;
public:
	bool empty() const { return v.size() == 0; }
	void push(const Item & x) { v.push_back(x); }
	Item & top() { return v.back(); }
	void pop() { v.pop_back(); }
};

int main() {
	stack<int> si;

	si.push(1);
	si.push(2);
	si.push(3);

	while (! si.empty()) {
		cout << si.top();
		si.pop();
	}

	return 0;
}