#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Pet {
protected:
	string _name;
public:
	Pet(string name) : _name(name) {}
	virtual string sound() const = 0;
	virtual void speak() const {
		cout << _name << ": " << sound() << "!\n";
	}
};

class Dog : public Pet {
public:
	Dog(string name) : Pet(name) {}
	virtual string sound() const { return "woof"; }
	virtual void speak() const;
};

class Dalmatian : public Dog {
	int _spots;
public:
	Dalmatian(string name, int spots) :
		Dog(name), _spots(spots) {}
	void speak() const {
		Pet::speak();
		cout << '(' << _name << " wags tail)\n";
	}
};

class Cat : public Pet {
public:
	Cat(string name) : Pet(name) {}
	virtual string sound() const { return "miao"; }
};

void speakTwice(const Pet &pet) {
	pet.speak();
	pet.speak();
}

void Dog::speak() const {
	Pet::speak();
	cout << '(' << _name << " wags tail)\n";
}

int main() {
  Cat c("Felix");
  Dog d("Buster");
  Dalmatian da("Spotty", 33);
  speakTwice(c);
  d.speak();
  da.speak();
  
  vector<Pet *> p; 
  p.push_back(&c);
  p.push_back(&d);
  p.push_back(&da);
  
  for (int i = 0; i < p.size(); ++i) {
	// p[i]->speak(); is equivalent
	(*p[i]).speak();
  }
  
  list<Pet *> pet_list(begin(p), end(p));
  
  
  return 0;
}