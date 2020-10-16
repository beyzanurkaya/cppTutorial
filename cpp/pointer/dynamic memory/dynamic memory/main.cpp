#include <iostream>
using namespace std;

struct kimlik{
    char adi[20];
    int yasi;
};
char buffer[100];
char buffer2[200];

int main() {
    
    kimlik *k1, *k2;
    int *k3, *k4;
    
    //new alisilmis kullanimi: dinamik bellek
    
    k1 = new kimlik; //heapte yapi icinde yer acma
    k3 = new int[20]; //heapte 20 elemanli tam sayi dizisi icin yer acma
    
    //buffer ile new kullanimi: static bellek
    
    k2 = new (buffer) kimlik; //bufferda yapi icin yer acma
    k4 = new (buffer2) int[20]; //buffer2de 20 elemanli tam sayi dizisi icin yer acma
    
    return 0;
}
