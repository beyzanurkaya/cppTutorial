#include <iostream>
using namespace std;

//ENUM

enum languages{english, danish, german, spanish};
enum friends{Ece=1, Sevval, Fatmanur}; //İlk değer atamalı. İlla 1 olmak zorunda değil.
enum persons{Bill, Elon=5, Steve, Stephen=9 };

int main() {
    
    cout << english << ")English " << endl;
    cout << danish << ")Danish" << endl;
    cout << german << ")German" << endl;
    cout << spanish << ")Spanish" << endl;
    
    cout << endl << "Isim Listesi" << endl;
    cout << Ece << ")Ece " << endl;
    cout << Sevval << ")Sevval " << endl;
    cout << Fatmanur << ")Fatmanur " << endl;
    
    
    cout << endl << "Idollerim" << endl;
    cout << Bill << ")Bill Gates " << endl;
    cout << Elon << ")Elon Musk " << endl;
    cout << Steve << ")Steve Wozniak " << endl;
    cout << Stephen << ")Stephen Hawking " << endl;
    
    return 0;
}
