#include <iostream>
using namespace std;

void stringP(char* k){
    while (*k) { //null karakterine esit olana kadar
        cout << *k++;
    }
    cout << endl;
}

void kopyala(char* d, const char* s){
    while (*s) {
        *d++ = *s++;
    }
}

int main() {
    
    char arr[] = "Beyza Nur Kaya";
    stringP(arr);
    
    char* arr2 = "Beyza Nur Kaya";
    char arr3[80];
    kopyala(arr3, arr2);
    cout << arr3 << endl;
    
    
    return 0;
}
