#include <iostream>
using namespace std;

class Kisi{
protected:
    char isim[40];
public:
    void Oku(){
        cout << "Isminizi giriniz: ";
        cin >> isim;
    }
    void Yaz(){
        cout << "Iyı gunler " << isim << endl;
    }
    virtual void VeriOku() = 0;
    virtual bool cikisDurumu() = 0;
};

class Ogrenci : public Kisi{
private:
    float notOrt;
public:
    void VeriOku(){
        Kisi::Oku();
        cout << "Not ortalamasi gir: ";
        cin >> notOrt;
    }
    bool cikisDurumu(){
        return (notOrt >= 3) ? true : false;
    }
};

class Profesor : public Kisi{
private:
    int yayinSayisi;
public:
    void VeriOku(){
        Kisi::Oku();
        cout << "Yayin sayisinizi giriniz: ";
        cin >> yayinSayisi;
    }
    bool cikisDurumu(){
        return (yayinSayisi > 100) ? true : false;
    }
};

int main() {
    
    Kisi *kptr[100];
    int n = 0;
    char c;
    do{
        cout << "Ogrenci girisi icin o profesor girisi icin p: ";
        cin >> c;
        if (c == 'o') {
            kptr[n] = new Ogrenci;
        } else if (c == 'p') {
            kptr[n] = new Profesor;
        }
        kptr[n++] -> VeriOku();
        cout << "Baska girisi yapmak istiyor musunuz? (e/h) ";
        cin >> c;
    }while (c == 'e');
    
    for (int i = 0; i < n; i++) {
        kptr[i] -> Yaz();
        if (kptr[i] -> cikisDurumu()) {
            cout << "Bu kisi basarilidir.\n";
        }
    }
    return 0;
}
