#include <iostream>
using namespace std;

class A {
  public:
  int x; /* The state of A. Without members (fields), an object has no state. */
  A( int i = 0 ) : x(i) {
    /* for 1.c - uncomment & add similar constructors to B, C, and D, with different default argument values. */
    cout << "A(" << i << ")\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from A\n";
  }
};
class B : public virtual A { /* uncomment virtual for 1.b */
  public:
  B() {
    cout << "B\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from B\n";
  }
};
class C : virtual public A { /* uncomment virtual for 1.b */
  public:
  C() {
    cout << "C\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from C\n";
  }
};
class D : public B, public C {
  public:
  D() {
    cout << "D\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from D\n";
  }
};
class E : public virtual C {
  public:
  E() {
    cout << "E\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from E\n";
  }
};
class F : public D, public E {
  public:
  F() {
    cout << "F\n";
  }
  virtual void print_stuff() const {
    cout << "Printing from F\n";
  }
};

int main() {
  D d;
  /** There are two ways to access the x of a particular object. */
  /** (a) By qualification: */
  d.B::x = 1; /* set the x from the B side of D to 1 */
  d.C::x = 2; /* set the x from the C side of D to 2 */
  /** (b) By restricting the object's interface to a particular base interface: */
  B &b = d;   /* refer to the B part of the D object */
  C &c = d;   /* refer to the C part of the D object */

  cout << "The B side x is " << d.B::x << " or " << b.x << endl;
  cout << "The C side x is " << d.C::x << " or " << c.x << endl;
  
  d.print_stuff();
  
  F f;
  f.print_stuff();
  return 0;
}