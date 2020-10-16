#include <iostream>
using namespace std;

template <class T, class T2>
class cift{
private:
    T a;
    T2 b;
public:
    T& ilk();
    T2& ikinci();
    T & ilk() const{
        return a;
    }
    T2 & ikinci() const{
           return b;
       }
    cift(){}
    cift(const T& aVar, const T2& bVar) : a(aVar), b(bVar){}
};

template <class T, class T2>
T & cift <T, T2> :: ilk(){
    return a;
};
template <class T, class T2>
T2 & cift <T, T2> :: ikinci(){
    return b;
};

int main() {
    
    cift <string, int> arr[4] = {
        cift<string, int> ("Beyza Nur Kaya", 22),
        cift<string, int> ("Muberra Kaya", 53),
        cift<string, int> ("Ercument Kaya", 25),
        cift<string, int> ("Saban Kaya", 60)
    };
    
    int sayi = sizeof(arr)/sizeof(cift<string, int>);
    for (int i = 0; i < sayi; i++) {
        cout << arr[i].ikinci() << ":\t" << arr[i].ilk() << endl;
    }
    
    arr[3].ilk() = "Ece Deniz Koksal";
    arr[3].ikinci()= 22;
    cout << arr[3].ikinci() << ": " << arr[3].ilk() << endl;
    
    
    return 0;
}
