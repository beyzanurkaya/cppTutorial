#include <iostream>
using namespace std;

/*
class Temel{
public:
    void Yaz(){
        cout << "Temel sinif\n";
    }
};

class Turetilmis : public Temel{
public:
    void Yaz(){
        cout << "Turetilmis sinif\n";
    }
};

class Turetilmis2 : public Temel{
public:
    void Yaz(){
        cout << "Turetilmis sinif2\n";
    }
};
*/

class Temel{
public:
    virtual void Yaz() = 0;
};

class Turetilmis : public Temel{
public:
    void Yaz(){
        cout << "Turetilmis sinif\n";
    }
};

class Turetilmis2 : public Temel{
public:
    void Yaz(){
        cout << "Turetilmis sinif2\n";
    }
};
int main() {
    
    
    Turetilmis t1;
    Turetilmis2 t2;
    Temel *ptr; //temel sinifina pointer
    ptr = &t1; //t1 adresini pointera atama
    ptr -> Yaz();
    ptr = &t2; //t2 adresini pointera atama
    ptr -> Yaz();
    
    //virtual fonksiyon tanimlanmazsa turetilmis siniflardan degil temel siniftan fonksiyonlar cagirilir. Derleyici, ptr isimli pointerin tanimina bakar onun icerigine dikkate almaz.
    
    //virtual fonksiyonda ise deklerasyona degil pointerin icerigine bakalir.
    
    
    return 0;
}
