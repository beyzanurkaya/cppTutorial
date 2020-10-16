#include <iostream>
using namespace std;

int s = 12;
int *p = &s; //ptr isimli pointer s'nin adresine ataniyor

int main() {
    

    int a;
    int* ptr;
    ptr = &a; //a degiskeninin adresi ptr pointerina ataniyor.
    *ptr = 66; //ptr pointerinin gösterdigi bellek bolgesine 66 sayisi ataniyor.
    a = *ptr; //tekrardan a degiskenine ptr pointerinin gosterdigi deger yani 66 atandi.
     
    cout << a << endl;
    cout << ptr << endl;
    cout << *(&a) << endl; //* pointeri ifade eder & adres gosterimini
    cout << *ptr << endl;
    cout << &ptr << endl;
    
    cout << "-----------------\n";
    
    cout << s << endl;
    cout << p << endl;
    cout << &s << endl;
    cout << *p << endl;
    cout << &p << endl;
    
    
    //float veri tipli bir pointeri int degiskeni icin atanmis bir bolgeye atayamayiz.(farkli tipdeki tum atamalr icin gecerli)
    
    int i = 16;
    float f = 0.6;
    void* Gos; //herhangi bir ture atamasi yapilabilir.
    int* intP;
    float* floatP;
    intP = &i;
    floatP = &f;
    
    cout << "-----------------\n";
    cout << "i: " << i << endl;
    cout << "f: " << f << endl;
    Gos = intP;
    cout << "i'nin adresi: " << Gos << endl;
    Gos = floatP;
    cout << "f'nin adresi: " << Gos << endl;
    
    return 0;
}
