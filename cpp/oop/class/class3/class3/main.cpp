#include <iostream>
using namespace std;

class kisi{
private:
    int yas;
public:
    void yasGir(int y){
        yas = y;
    }
    void yasYaz(){
        cout << yas;
    }
}a;

class personel{
private:
    char perAdi[20], perSoyadi[30];
    int yas;
public:
    void bilgi(char *padi, char *psoyadi, int y){
        strcpy(perAdi, padi);
        strcpy(perSoyadi, psoyadi);
        yas=y;
    }
    void ekranaYaz(){
        cout << "Personel adi: " << perAdi << endl;
        cout << "Personel soyadi: " << perSoyadi << endl;
        cout << "Personel yasi: " << yas << endl;
    }
}p1;

int main() {
    
    p1.bilgi("Beyza Nur", "Kaya", 22);
    p1.ekranaYaz();
    cout << endl;
    
    int x;
    cout << "Personelin yasini giriniz: ";
    cin >> x;
    a.yasGir(x);
    cout << "Personelin yasi: ";
    a.yasYaz();
    cout << endl;
      
    return 0;
}
