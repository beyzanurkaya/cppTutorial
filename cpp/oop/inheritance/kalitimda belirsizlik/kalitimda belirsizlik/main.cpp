#include <iostream>
using namespace std;

class A{
public:
    void Yaz(){
        cout << "Class A\n";
    }
};

class B{
public:
    void Yaz(){
        cout << "Class B\n";
    }
};

class C : public A, public B{
    
};

int main() {
    
    C objC;
    //objC.Yaz(); hangi yaz fonksiyonu belli degil. Hata verir.
    objC.A::Yaz();
    objC.B::Yaz();
    
    return 0;
}
