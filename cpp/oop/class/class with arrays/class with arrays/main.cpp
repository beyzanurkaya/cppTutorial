#include <iostream>
using namespace std;

//Nesne Dizileri

class diziler{
private:
    int num;
public:
    void atama(int n){
        num = n;
    }
    int getNum(){
        return num;
    }
}arr[5];

//**************************************************************************************************************************************************************//

class kisi{
private:
    string isim, soyisim;
    int yas;
public:
    kisi(string i, string si, int y){
        isim = i;
        soyisim = si;
        yas = y;
    }
    void ekranaBas()  {
        cout << "Isim: " << isim << endl;
        cout << "Soyisim: " << soyisim << endl;
        cout << "Yas: " << yas << endl;
    }
};

//**************************************************************************************************************************************************************//

class birey{
private:
    string isim, soyisim;
    int yas;
public:
    void bireyAtama();
    void ekranaBas()  {
        cout << "Isim: " << isim << endl;
        cout << "Soyisim: " << soyisim << endl;
        cout << "Yas: " << yas << endl;
    }
};
void birey::bireyAtama(){
    string i, si;
    int y;
    cout << "Ismini gir: ";
    cin >> i;
    cout << "Soyismini gir: ";
    cin >> si;
    cout << "Yasini gir: ";
    cin >> y;
    
    isim = i;
    soyisim = si;
    yas = y;
    
}

int main() {
    
    int i=0,j;
    while (i<5) {
        cout << i+1 << ". deger: ";
        cin >> j;
        arr[i].atama(j);
        i++;
    }
    for (i=0; i<5; i++) {
        cout << arr[i].getNum() << endl;
    }
    
//**************************************************************************************************************************************************************//
    
    kisi k[3]= {
        kisi("Beyza Nur", "Kaya", 22), kisi("Şevval", "Metlek", 22), kisi("Ece Deniz", "Koksal", 22)
    };
    for (int j=0; j<2; j++) {
        k[j].ekranaBas();
        cout << "------------------" << endl;
    }
    
//**************************************************************************************************************************************************************//
    
    cout << endl;
    
    birey bi[2][2];
    for (int a=0; a<2; a++) { //kullanicidan girdi aliniyor
        for (int b=0; b<2; b++) {
            bi[a][b].bireyAtama(); //alinan girdiler ataniyor
        }
    }
    for (int a=0; a<2; a++) {
        for (int b=0; b<2; b++) {
            bi[a][b].ekranaBas();
            cout << endl;
        }
    }
    
    return 0;
}
