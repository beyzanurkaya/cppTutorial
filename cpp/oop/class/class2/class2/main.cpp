#include <iostream>
using namespace std;

class dikdortgen {
public:
    int kisa_kenar;
    int uzun_kenar;
    
    int alan(){
        return kisa_kenar*uzun_kenar;
    }
    
    int cevre(){
        return 2*(kisa_kenar+uzun_kenar);
    }
    
}d;

void dikdortgenKenarlari(){
    cout << "Dikdortgenin uzun kenarini giriniz: ";
    cin >> d.uzun_kenar;
    cout << "Dikdortgenin kisa kenarini giriniz: ";
    cin >> d.kisa_kenar;
    
    cout << "Dikdortgenin alani: " << d.alan() << endl;
    cout << "Dikdortgenin cevresi: " << d.cevre() << endl;
    
}

int main() {
    
    dikdortgenKenarlari();
    
    return 0;
}
