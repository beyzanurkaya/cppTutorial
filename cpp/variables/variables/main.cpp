#include <iostream>
using namespace std;

void funSt(){
    int L1= 20;
    static int S1= 10; //Static Variable: Degiskenin degeri fonksiyonun sonuna kadar degismez. Yapilan islemi bellege atar.
    cout << "L1: " << L1 << " S1: " << S1 << endl;
    L1++;
    S1++;
}
char harf= 'A'; //Global Variable: Fonksiyonun disinda tanimlanmis deg-giskenler. Tüm fonksiyonlar için gecerlidir.

int main() {
    
    int var1; //Degisken deklerasyonu. Deklerasyonda degisken için bellekte yer ayrilmaz.
    int var2= 15; //Degisken atamasi.
    extern int var5; //Tanim degildir. Bellekte yer ayrilmaz. Bu sadece derleyiciye degisken taniminin programin icinde bir yerde var oldugunu bildirir. externde ilk deger atamasi yapilmaz.
    //Degiskenler bircok kez deklere edilebilir ancak sadece bir kez tanimlanir.
    
    //l-value: '=' atama operatorunun solunda veya saginda yer alabilen ifadelere left value denir. Sabit olmayan bir l-value okunabilir ve yazılabilir. Degiskenler l-valuedur.
    int var3= 16;
    //6*var3= var; (YANLIS)
    //19=98; (YANLIS)
    var3= var3+6;
    
    //r-value: '=' atama operatorunun sadece saginda yer alabilen ifadelere right value denir. r-value okunabilir fakat yazilamaz.
    
    int var4= 10; //Local Variable: Fonksiyonun icinde tanimlanmis degiskenler. Sadece icinde bulundugu fonksiyon için gecerlidir.
    cout << var4 << endl;
    cout << harf <<endl;
    funSt();
    funSt();
    funSt();
    
    cout << endl;
    float radius, circumference, area, volume;
       const float pi= 3.14159;
       cout << "Enter radius of circle: ";
       cin >> radius;
       circumference= 2*pi*radius;
       area= pi*radius*radius;
       volume= (4/3)*pi*radius;
       cout << "circumference= " << circumference << endl;
       cout << "Area= " << area << endl;
       cout << "Volume= " << volume << endl;
    
    return 0;
}
