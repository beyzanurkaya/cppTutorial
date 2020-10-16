#include <iostream>
using namespace std;

class A{
private:
    int priA;
protected:
    int proA;
public:
    int pubA;
    void get(int i){
        priA = i;
        cout << priA;
    }
};

class B : public A{
public:
    void func(){
        int a;
        //a = priA; **hata verir.
        a = proA;
        a = pubA;
    
    }
};

class C : private A{
public:
     void func(){
         int a;
         //a = priA; **hata verir.
         a = proA;
         a = pubA;
        
         
     }
};
int main() {
    
    int a;
    
    B objB;
    //a = objB.priA; private degiskene sinif disinda erisilmez.
    //a = objC.proA; protected degiskene sinif disinda erisilmez.
    a = objB.pubA;
    
    C objC;
    //a = objC.priA; private degiskene sinif disinda erisilmez.
    //a = objC.proA; protected degiskene sinif disinda erisilmez.
    //a = objC.pubA; C sinifi private hala geldigi icin uyelerine erisim olmaz.
    
    
    return 0;
}
