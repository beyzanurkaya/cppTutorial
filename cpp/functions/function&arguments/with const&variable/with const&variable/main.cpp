#include <iostream>
using namespace std;

void writingChar1(char, long); //Prototipli argümanlı fonksiyon oluşturma.
void writingChar2(){ //Argümansız fonksiyon oluşturma.
    char m;
    int n;
    cout << "Enter a character: ";
    cin >> m;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << m << " ";
    }cout << endl;
}
int main (){
    writingChar1('+', 10); //Fonskiyonu sabit olan argümanla çağırma.
    writingChar1('B', 6);
    char x;
    long y;
    cout << "Enter a character: ";
    cin >> x;
    cout << "Enter a number: ";
    cin >> y;
    writingChar1(x, y); //Fonksiyonu değişken olan argümanla çağırma.
    writingChar2();
    return 0;
}
void writingChar1(char i, long j){ //Bu gösterimde char ve int argüman, i ve j parametredir.
    for (int a=0; a<j; a++) {
        cout << i << " ";
    } cout << endl;
}

