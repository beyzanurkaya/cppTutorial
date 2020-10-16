#include <iostream>
using namespace std;

class Sayac{ //temel sinif
protected: //private olsa alt siniflardan erisim olmaz.
    unsigned int sayac;
public:
    Sayac(): sayac(4){}
    Sayac(int c): sayac(c){}
    unsigned int getSayac() const{
        return sayac;
    }
    Sayac operator ++ (){
        return Sayac(++sayac);
    }
};

class yeniSayac : public Sayac{ //alt sinif
public:
    Sayac operator -- (){
        return Sayac(--sayac);
    }
};

int main() {
    
    yeniSayac y1;
    cout << "y1= " << y1.getSayac();
    ++y1;
    cout << "\ny1= " << y1.getSayac();
    --y1;
    --y1;
    cout << "\ny1= " << y1.getSayac() << endl;
    
    return 0;
}
