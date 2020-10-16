#include <iostream>
using namespace std;

void writingChar1(); //Bir fonksiyonu birden fazla argümanla(değişkenle) çağırma.
void writingChar1(char);
void writingChar1(char, int);
void writingChar2(char= '*', int=45);
/////////////////////////////////////////
void write(int x) {
    cout << x << endl;
}
void write(double x){
    cout << x << endl;
}
void write(string x){
    cout << x << endl;
}
void write (int a, double b, string c) {
    cout << a << b << c << endl;
}
/////////////////////////////////////////

int main() {
    
    writingChar1(); //Argümansız.
    writingChar1('-'); //Tek argümanlı.
    writingChar1('+', 30); //Çift argümanlı.
    
    writingChar2(); //Argümanı yokken fonksiyondaki sabitleri kullanır.
    writingChar2('=');
    writingChar2('.',30);
    
    write(5);
    write(3.14);
    write("Beyza");
    
    return 0;
}
void writingChar1(){
    for (int j=0; j<45; j++) {
        cout << "*";
    }cout << endl;
}
void writingChar1(char n){
    for (int j=0; j<35; j++) {
        cout << n;
    }cout << endl;
}
void writingChar1(char m, int k){
    for (int j=0; j<k; j++) {
        cout << m << " ";
    }cout << endl;
}
void writingChar2(char m, int n){
    for (int i=0; i<n; i++) {
        cout << m;
    }cout << endl;
}
