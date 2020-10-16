#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    string dosyaAdi;
    cout << "Bir dosya adi giriniz: ";
    cin >> dosyaAdi;
    
    ofstream outFile(dosyaAdi.c_str());
    char n[40] = {"Beyza Nur Kaya"};
    long tc;
    cout << "TC kimlik no giriniz: ";
    cin >> tc;
    outFile << "Adiniz:  " << n << endl;
    outFile << "TC kimlik no:  " << tc << endl;
    cout << "Dosyaya yazdirma islemi tamamlandi\n";
    
    outFile.close();
    
    ifstream inFile(dosyaAdi.c_str());
    cout << endl << "Dosya adi: " << dosyaAdi << endl;
    char c;
    while (inFile.get(c))
        cout << c;
    inFile >> n;
    cout << n << endl;
    inFile.getline(n, 40);
    
    inFile.close();
    
    const int MAX = 40;
    char buffer[MAX];
    
    cout << endl;
    ifstream inDos("/Users/beyzanurkaya/Desktop/programming/cpp/file operations/beyza.txt");
    while (!inDos.eof()) {
        inDos.getline(buffer, MAX);
        cout << buffer << endl;
    }
    return 0;
}
