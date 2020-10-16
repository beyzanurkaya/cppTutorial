#include <iostream>
using namespace std;

class yapiciFonksiyon{
private:
    int s1, s2, s3;
public:
    yapiciFonksiyon(){
        s1 =16;
        s2 = 6;
        s3 = 98;
    }
    yapiciFonksiyon(double x, double y, double z){ //overloading
        s1 = x+3;
        s2 = y+3;
        s3 = z+3;
    }
    void ekranaBas(){
        cout << "Birinci sayi: " << s1 << "\nIkinci sayi: " << s2 << "\nUcuncu sayi: " << s3 << endl;
    }
};

class defaultYapici{
private:
    string i, i2, si, si2;
public:
    defaultYapici(string n= "Beyza Nur", string n2= "Bill", string sn= "Kaya", string sn2= "Gates"){
        i = n;
        i2 = n2;
        si = sn;
        si2 = sn2;
        
        ekranaBas();
    }
    
    void ekranaBas(){
        cout << "Isim: " << i << "  Soyisim: " << si << endl;
        cout << "Isim: " << i2 << "  Soyisim: " << si2 << endl;
    }
};

class Point{
private:
    int x,y;
public:
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }
    Point(const Point &p2){
        x = p2.x;
        y = p2.y;
    }
    int getX(){
           return x;
       }
    int getY(){
           return y;
       }
};
int main() {
    
    yapiciFonksiyon n, n2(10,20,30); //Farkli argumanlara sabitler. Asiri yukleme gerceklesti.
    n.ekranaBas();
    cout << "-------------------------------------\n";
    n2.ekranaBas();
    cout << "-------------------------------------\n";
    defaultYapici();
    defaultYapici("Steve");
    cout << "-------------------------------------\n";
    defaultYapici("Steve", "Elon");
    cout << "-------------------------------------\n";
    defaultYapici("Steve", "Elon", "Wozniak");
    cout << "-------------------------------------\n";
    defaultYapici("Steve", "Elon", "Wozniak", "Musk");
    cout << "-------------------------------------\n";
    
    Point p1(10,20);
    Point p2 = p1; //Kopyalama constructor fonskiyonlari cagrildi.
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
    cout << "-------------------------------------\n";
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
    return 0;
}
