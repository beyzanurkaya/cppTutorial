#include <iostream>
using namespace std;

//Belirli bir sinifin cok sayidaki nesneleri ile calismak zorunda kalanlar icin her nesnenin olusturlmasinin hemen ardindan kendisini ilk kullanima hazirlamasi cok daha guvenilir ve uygundur. Nesnelerin kendiliginden ilk kullanima hazirlanmasi islemi construct fonksiyonla saglanir. Her ne zaman bir nesne olusturulursa construct fonskiyon kendiliginden hemen harekete gecer ve olusturulan nesneye ilk deger atar.

class Sayac {
private:
    unsigned int sayac;
public:
    Sayac():sayac(0){}; //construct fonsksiyonlar icin donus tipi kullanilmaz. construct fonksiyonlar sistem tarafindan kendiliginden cagirdiklari icin bunlarin deger dondurmeleri gereken bir program yoktur. Bu nedenle donus degerinin anlami da yoktur.
     //Eger birden fazla uyeye ilk deger atanacaksa orneksinis(): e1(10), e2(20), e3(30)...{}; seklinde ifade edilir.
    
    void artir(){
        sayac++;
    };
    
    int getSayac(){
        return sayac;
    }
};

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

class Sayi{
public:
    int a,b,c;
    Sayi(){
        a = 16, b = 6, c = 98;
    }
}n;


class kisi{
private:
    string isim, soyisism;
    int yas;
public:
    kisi(string i, string s, int y){
        isim = i;
        soyisism = s;
        yas = y;
    }
    void ekranaYaz(){
        cout << "Isim: " << isim << endl;
        cout << "Soyisim: " << soyisism << endl;
        cout << "Yas: " << yas << endl;
    }
};

class birey{
private:
    string isim, soyisim;
    int yas;
public:
    birey(string, string, int);
    void ekranaBas();
};

birey::birey(string n, string sn, int a){//kisi sinifyla ayni ciktiyi verecektir. Ancak burada sinif icinde yazilan fonksiyonlar sinifin disina tasindi. Bu yapilirken oncelikle sinifin icine sadece o fonksiyonlarin adi ve varsa prototipleri yazilir. Daha sonra sinifin disina fonksiyonlarin govdesi yazilir. Geri donus degeri varsa onu yazip yanina sinif adi yazilir ve sonrasinda :: yazip fonksiyon olusturulur (void birey::ekranaBas(){....}). Eger construct fonksiyon sinifin disinda belirtilicek olursa sadece sinif adini yazip yine :: isareti koyduktan sonra fonksiyon olusturulur.
    isim = n;
    soyisim = sn;
    yas = a;
}
void birey::ekranaBas(){
    
    cout << "Name: " << isim << endl;
    cout << "Surname: " << soyisim << endl;
    cout << "Age: " << yas << endl;

}
int main() {
    
    Sayac s1, s2;
    cout << "1.sayac: " << s1.getSayac() << endl;
    cout << "2.sayac: " << s2.getSayac() << endl;
    s1.artir();
    s2.artir();
    cout << "------------------------\n";
    cout << "1.sayac: " << s1.getSayac() << endl;
    cout << "2.sayac: " << s2.getSayac() << endl;
    cout << "------------------------\n";
    cout << "A: " << n.a << endl;
    cout << "B: " << n.b << endl;
    cout << "C: " << n.c << endl;
    
    kisi k1("Beyza Nur", "Kaya", 22);
    k1.ekranaYaz();
    cout << "------------------------\n";
    birey b1("Beyza Nur", "Kaya", 22);
    b1.ekranaBas();
    
    return 0;
}
