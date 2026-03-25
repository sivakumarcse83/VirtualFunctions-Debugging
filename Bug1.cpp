#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base display\n";
    }
};
class Derived : public Base {
public:
    void display(int x) {
        cout << "Derived display\n";
    }
};
int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();
}
