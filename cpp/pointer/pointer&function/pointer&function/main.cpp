#include <iostream>
using namespace std;

double kare(int n){
    return n*n;
}
double kup(int s){
    return s*s*s;
}
void hesapla(int m, double (*fg)(int)){
    cout << (*fg)(m) << endl;
}

int main() {
    
    int x;
    cout << "Bir sayi giriniz: ";
    cin >> x;
    cout << x << "'nin karesi: ";
    hesapla(x, kare);
    cout << x << "'nin kubu: ";
    hesapla(x, kup);
    
    return 0;
}
