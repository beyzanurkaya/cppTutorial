#include <iostream>
using namespace std;

template <class Sablon>
Sablon mutlakDeger (Sablon n){
    return (n<0) ? -n : n;
}

template <class T>
int bul(T* arr, T aranan, int size){
    for (int i = 0; i < size; i++) {
        if (arr[i] == aranan) {
            return i; //indis numarasi araniyor
        }
    }return -1;
}

char cArr[] = {'a', 'b', 'c', 'd', 'e'};
char cAra = 'b';
int iArr[] = {1, 3, 5, 7, 9};
int iAra = 5;
long lArr[] = {1L, 3L, 5L, 7L, 9L};
long lAra = 11L;
double dArr[] = {1.0, 3.0, 5.0, 7.0, 9.0};
double dAra = 9.0;

int main() {
    
    int x = 16;
    cout << "|" << x << "| = " << mutlakDeger(x) << endl;
    int y = -6;
    cout << "|" << y << "| = " << mutlakDeger(y) << endl;
    float z = 1.998;
    cout << "|" << z << "| = " << mutlakDeger(z) << endl;
    double i = -10.95;
    cout << "|" << i << "| = " << mutlakDeger(i) << endl;
    cout << endl;
    
    cout << "cArr aranan: " << cAra << "  Indis numarasi: " << bul(cArr, cAra, 5) << endl;
    cout << "iArr aranan: " << iAra << "  Indis numarasi: " << bul(iArr, iAra, 5) << endl;
    cout << "lArr aranan: " << lAra << "  Indis numarasi: " << bul(lArr, lAra, 5) << endl;
    cout << "dArr aranan: " << dAra << "  Indis numarasi: " << bul(dArr, dAra, 5) << endl;

    return 0;
}
