#include <iostream>
using namespace std;

class kisi{
private:
    string isim, soyisim;
    int yas;
public:
    kisi(string, string, int);
    void ekranaBas();
    
    
};
kisi::kisi(string i, string si, int y){
    isim = i;
    soyisim = si;
    yas = y;
}

void kisi::ekranaBas(){
    cout << "Isim: " << isim << endl;
    cout << "Soyisim: " << soyisim << endl;
    cout << "Yas: " << yas << endl;
}

int main() {
    
    kisi k[3] = {
        kisi("Beyza Nur", "Kaya", 22), kisi("Sevval", "Metlek", 22), kisi("Ece Deniz", "Koksal", 22)
    };
    
    kisi *p = k;
    for (int i = 0; i < 3; i++) {
        p -> ekranaBas(); //sinifa ait ekranaBas fonksiyonuna git.
        p++;
    }
    return 0;
}
