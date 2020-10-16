#include <iostream>
using namespace std;

class A {
public:
    int b;
    A() {
        b = 5;
    }
};

int main() {
    
   A a = A();
   A* x = &a;
   cout << "a.b = " << a.b << "\n";
   cout << "x->b = " << x->b << "\n";
    
   return 0;
}
