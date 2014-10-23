#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename Elem>
class queue {
	list<Elem> l;
public:
	bool empty() const { return l.size() == 0; }
	Elem head() const { return l.front(); }
	Elem tail() const { return l.back(); }
	void enqueue(const Elem & x) { l.push_back(x);}
	void dequeue() { l.pop_front(); }
};

int main() {
	queue<int> q;
	
	q.enqueue(1);
	q.enqueue(2);
	cout << q.head();
	cout << q.tail();
	q.dequeue();
	cout << q.head();

	return 0;
}