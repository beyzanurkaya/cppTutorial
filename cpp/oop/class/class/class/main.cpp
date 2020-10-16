#include <iostream>
using namespace std;

class classname{
private: //Private olarak tanimlanan bir veri ya da fonksiyon sadece kendi sinifin icinden erisilebilir.
    //Veriler;
    //Fonksiyonlar; fonksiyon protopi yazilip govdesi sinif disinda tanimlanir ya da direkt fonksiyon olusturulur.
public: //Public olarak tanimlanan bir veri ya da fonksiyona kendi siniflarinin disinda da erisilebilir.
    //Veriler;
    //Fonksiyonlar; fonksiyon protopi yazilip govdesi sinif disinda tanimlanir ya da direkt fonksiyon olusturulur.
}; //Kolaylik olmasi icin burada kisa bir isim tanimlanip class ismi yerine kullanilabilir.
//Genel olarak veriler privateda fonksiyonlar publicte tanimlanir.
class example{
private:
    int data;
public:
    void writingData(int d){ //Uye fonksiyon: Bir sinifin icinde yer alan fonksiyonlardır.
        data=d;
        cout << "Data: " << data << endl;
    }
};
int main() {
    
    example e1,e2;
    e1.writingData(55);
    e2.writingData(666);
    
    return 0;
}
