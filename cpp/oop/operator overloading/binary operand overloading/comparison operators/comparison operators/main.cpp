#include <iostream>
using namespace std;

class karsilastirma{
    int x, y;
public:
    karsilastirma();
    karsilastirma(int a, int b){
        x = a;
        y = b;
    }
    bool operator == (karsilastirma a){
        if (x == a.x && a.y) {
            return 1;
        }else {
            return 0;
        }
    }
    bool operator != (karsilastirma b){
        if (x != b.x || y != b.y) {
            return 1;
        }else {
            return 0;
        }
    }
};

class karsilastirma2{
    int x, y;
public:
    karsilastirma2();
    karsilastirma2(int a, int b){
        x = a;
        y = b;
    }
    bool operator < (karsilastirma2 a){
       
        if ((x + y) < (a.x + a.y)) {
            return 1;
        }else{
            return 0;
        }
    }
    bool operator > (karsilastirma2 b){
        if ((x + y) > (b.x + b.y)) {
            return 1;
        }else {
            return 0;
        }
    }
};

int main() {
    
    karsilastirma s(10, 20), s2(20, 10), s3(20, 10);
    if (s == s2) {
        cout << "s ve s2 esittir\n";
    }else {
        cout << "s ve s esit degildir.\n";
    }
    
    
    if (s2 != s3) {
        cout << "s2 ve s3 esit degildir.\n";
    }else {
        cout << "s2 ve s3 esittir.\n";
    }
    
    karsilastirma2 n(70, 20), n2(20,50);
    if (n < n2) {
        cout << "n, n2den kucuktur.\n" << endl;
    }
    if(n > n2){
        cout << "n, n2den buyuktur.\n" << endl;
    }
    return 0;
}
