#include <iostream>
using namespace std;

const int UZ = 80;

class Egitim{
private:
    char okul[UZ], diploma[UZ];
public:
    void egitimOku(){
        cout << "Universite ismi: ";
        cin >> okul;
        cout << "Diploma notu: ";
        cin >> diploma;
    }
    void egitimGoster() const {
        cout << "Universite: " << okul << endl;
        cout << "Diploma: " << diploma << endl;
    }
};

class Calisan{ //temel sinif
private:
    char adi[UZ];
    long kimNumara;
public:
    void oku(){
        cout << "Adinizi giriniz: ";
        cin >> adi;
        cout << "Kimlik numaranizi giriniz: ";
        cin >> kimNumara;
        
    }
    void yaz () const {
        cout << "Adiniz: " << adi << endl;
        cout << "Kimlik numaraniz: " << kimNumara << endl;
    }
};

class Yonetici : public Calisan{
private:
    char unvan[UZ];
    double aidat;
public:
    void oku(){
        Calisan::oku();
        cout << "Unvaninizi giriniz: ";
        cin >> unvan;
        cout << "Aidat bilgisini giriniz: ";
        cin >> aidat;
    }
    
    void yaz() const{
        Calisan::yaz();
        cout << "Unvaniniz: " << unvan << endl;
        cout << "Aidat bilgisi: " << aidat << endl;
    }
};

class yeniYonetici : private Calisan, private Egitim{
private:
    char unvan[UZ];
    double golf_aidat;
public:
    void oku(){
        Calisan::oku();
        cout << "Unvaninizi giriniz: ";
        cin >> unvan;
        cout << "Golf aidati: ";
        cin >> golf_aidat;
        Egitim::egitimOku();
    }
    void yaz() const{
        Calisan::yaz();
        cout << "Unvaniniz: " << unvan << endl;
        cout << "Golf aidat bilgisi: " << golf_aidat << endl;
        Egitim::egitimGoster();
        
    }
};

class bilimInsani : public Calisan{
private:
    int yayinSayici;
public:
    void oku(){
        Calisan::oku();
        cout << "Yayin sayinizi giriniz: ";
        cin >> yayinSayici;
    }
    void yaz() const{
        Calisan::yaz();
        cout << "Yayin sayiniz: " << yayinSayici;
    }
};

class yeniBilimInsani : private Calisan, private Egitim{
private:
    int yayinSayici;
public:
    void oku(){
        Calisan::oku();
        cout << "Yayin sayinizi giriniz: ";
        cin >> yayinSayici;
        Egitim::egitimGoster();
    }
    void yaz() const{
        Calisan::yaz();
        cout << "Yayin sayiniz: " << yayinSayici;
        Egitim::egitimGoster();
    }
};

class Stajer : public Calisan{};

class Asistan : public Stajer{
private:
    float dosya;
public:
    void oku(){
        cout << "Dosya sayisini giriniz: ";
        cin >> dosya;
    }
    void yaz(){
        cout << "Dosya sayisi: " << dosya << endl;
    }
};

int main() {
    
    yeniYonetici y;
    yeniBilimInsani b;
    Asistan a;
    Stajer s;
    
    cout << "Yonetici bilgileri giriniz\n";
    y.oku();
    cout << endl;
    cout << "Bilim insani bilgileri giriniz\n";
    b.oku();
    cout << endl;
    cout << "Asistan bilgileri giriniz\n";
    a.oku();
    cout << endl;
    cout << "Asistan bilgileri giriniz\n";
    s.oku();
    cout << endl;
    
    cout << "Yonetici bilgileri\n";
    y.yaz();
    cout << endl << endl;
    cout << "Bilim insani bilgileri\n";
    b.yaz();
    cout << endl << endl;
    cout << "Asistan bilgileri\n";
    a.yaz();
    cout << endl << endl;
    cout << "Stajer bilgileri\n";
    s.yaz();
    cout << endl << endl;
    
    return 0;
}
