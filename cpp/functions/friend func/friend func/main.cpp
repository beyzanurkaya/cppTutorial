#include <iostream>
using namespace std;

class testSinif{ //Sinif tanimlaniyor.
private:
    int a,b; //private elemanlara erisim saglar.
public:
    friend int fark(testSinif ts); //Arkadas fonksiyon tanimlaniyor.
    testSinif(); //Yapici fonsiyon tanimlaniyor.
};

testSinif::testSinif() { //Yapici fonksiyon
    
    a = 10;
    b = 20;
}

int fark(testSinif ts){ //Arkadas fonksiyon
    if (ts.a == ts.b){
        return 0;
    }
    return 1;
}
int main(){
    
    testSinif ts;
    if (fark(ts)){
        cout << "Iki deger esit degildir.\n";
    }else{
        cout << "Iki deger esittir.\n";
    }
    return 0;
}
