#include <iostream>
using namespace std;

class constFonskiyon{
public:
    int num;
    constFonskiyon(){ //construct fonskiyon, sinifla ismi aynidir. Fonksiyonu cagirmadan ilk deger atamasi yapma ve
        num = 0;
    }
    void atama(int x){
        num = x;
    }
    int getNum() const{ //Normal degiskenleri degisiklige ugratmaktan korumak icin const kullanilir. const olarak deklere edilir ve tanimlanan bir uye fonksiyon sinifin uye verilerinden hicbirini asla değistirmez.
        return num;
    }
    
    void ekranaYaz(){
        cout << num;
    }
    mutable int num2; //Bu fonksiyonu main() fonksiyonunda çağırılırsa program çalışması süresince hata vermeyecektir ve sorunsuz bir şekilde const fonksiyonun içeğinde değer ataması yapılabilecektir.
    
    void sifirla() const{
        
        num2 = 0;
    }
};

int main() {
    
    const constFonskiyon e1;
    constFonskiyon e2;
    
    e1.getNum();   //Nesne const-fonksiyon const. (HATA YOK)
    //e1.atama(9); //Nesne const-fonksiyon const değil. (HATA)
    e2.getNum(); //Nesne const değil-fonksiyon const. (HATA YOK)
    e2.atama(5); //Nesne const degil-fonksiyon const değil. (HATA YOK)
    e2.ekranaYaz();
    //e1 const degisken oldugu icin sadece const fonksiyonlari kullanabilir
    
    return 0;
}
