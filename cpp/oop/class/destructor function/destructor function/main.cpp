#include <iostream>
using namespace std;

//Bir nesneyi ortadan kaldirmak (bellekten silmek) icin baska bir uye fonksiyonun da kendiliginden çagrilir. Bu tur fonksiyonlara destructor fonksiyon denir.

class destructorFonk{
private:
    int n;
public:
    destructorFonk():n(0){}
    ~destructorFonk(){} //construct fonksiyonlar gibi destructor fonksiyonlarin da donus degeri yoktur. Ayrica arguman da alamazlar. destructor fonksiyonlar en yaygin olarak bir nesne icin construct fonksiyonlarin ayirdigi bellek bolgesini iade etmek icin kullanilir.
};

class destructorFonk2{
private:
    int a;
public:
    destructorFonk2(){
        cout << "construct fonksiyon calisiyor\n";
        a = 5;
    }
    ~destructorFonk2(){
        cout << "Gorev tamamlandi. Fonskiyon yok ediliyor.\n";
    }
    void getA(){
        cout << "A: " << a << endl;
    }
}df2;


//Ciktilari aynidir. Sadece birinde construct ve destructor fonksiyonlar sinif disinda tanimlanmistir.
class destructorFonk3{
private:
    int a;
public:
    destructorFonk3();
    ~destructorFonk3();
    
    void getA();
    
}df3;

destructorFonk3::destructorFonk3(){
    cout << "construct fonksiyon calisiyor\n";
    a = 5;
}

destructorFonk3::~destructorFonk3(){
    cout << "Gorev tamamlandi. Fonskiyon yok ediliyor.\n";
}

void destructorFonk3::getA(){
    cout << "A: " << a << endl;
}

int main() {
    
    df2.getA();
    df3.getA();
    return 0;
}
