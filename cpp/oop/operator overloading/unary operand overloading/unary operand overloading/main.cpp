#include <iostream>
using namespace std;

//(sinif adi) operator (overloading yapilcak operator) (arguman listesi) {fonksiyonunun islevi}

class karmasikSayi{
public:
    float im, re;
};

karmasikSayi operator + (karmasikSayi a, karmasikSayi b){
    
    karmasikSayi sonuc;
    sonuc.re = a.re + b.re;
    sonuc.im = a.im + b.im;
    
    return sonuc;
}

class cikarma{
private:
    double sayi, sayi2;
public:
    cikarma(){
        sayi = 0;
        sayi2 = 0;
    }
    cikarma(double num, double num2){
        sayi = num;
        sayi2 = num2;
    }
    cikarma operator -- (){
        
        sayi--;
        sayi2--;
        
        return *this;
    }
    
    void ekranaBas(){
        
        cout << sayi << " " << sayi2 << endl;
        
    }
};


int main() {
    
    
    
    karmasikSayi i, r, s;
    i.im = 3;
    i.re = 4;
    
    r.im = 5;
    r.re = 12;
    
    s = i + r;
    
    cout << s.re << " + " << s.im << "i" << endl;
    
    cikarma c(11.2, 8.5);
    --c;
    c.ekranaBas();
    
    
    return 0;
}
