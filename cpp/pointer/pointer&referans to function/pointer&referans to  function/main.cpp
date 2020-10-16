#include <iostream>
using namespace std;

//argumani deger olarak gonderme: eger bir fonksiyonun kendisini cagiran programdaki degiskenlerin sakladigi degerlerin degistirilmesi istenmiyorsa o zaman bu fonksiyonun argumanlari deger olarak gonderilir.

//argumanı degisken olarak gonderme: eger bir fonksiyonun kendisini cagiran programdaki degiskenlerin sakladigi degerlerin degistirilmesi gerekiyorsa bu durumda fonksiyonun argumanlari ya referans olarak ya da pointer olarak gonderilir.

void Cevir(double& d){ //referans arguman olarak gonderiliyor.
    d *= 2.54;
}

int main() {
    
    double deg = 10.0;
    cout << "Deger = " << deg << " inc.\n";
    Cevir(deg);
    cout << "Deger = " << deg << " cm.\n";
    return 0;
}
