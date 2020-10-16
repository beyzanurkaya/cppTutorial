#include <iostream>
using namespace std;

template <class T>
struct link{
    T dt;
    link *next;
};

template <class T>
class linkList{
private:
    link<T> *ilk;
public:
    linkList(){
        ilk = NULL;
    }
    void Ekle(T d);
    void Yaz();
};

template <class T>
void linkList <T> :: Ekle(T d){
    link<T>* yeniLink = new link<T>;
    yeniLink -> dt = d;
    yeniLink -> next = ilk;
    ilk = yeniLink;
};

template <class T>
void linkList<T> :: Yaz(){
    link<T>* temp = ilk;
    while (temp != NULL) {
        cout << temp -> dt << endl;
        temp = temp -> next;
    }
    cout << endl;
};

int main() {
    
    linkList<double> bd;
    bd.Ekle(151.5);
    bd.Ekle(262.6);
    bd.Ekle(373.7);
    bd.Yaz();
    
    linkList<char> bch;
    bch.Ekle('a');
    bch.Ekle('b');
    bch.Ekle('c');
    bch.Yaz();
    
    return 0;
}
