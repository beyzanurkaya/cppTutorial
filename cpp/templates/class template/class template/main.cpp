#include <iostream>
using namespace std;

const int M = 100;

template <class T>
class stack{
private:
    T arr[M]; //herhangi bir tipte dizi
    int top; //stackin en ust elamaninin indisi
public:
    stack(){
        top = -1;
    }
    void push(T var){
        arr[++top] = var; //stacke eleman ekle
    }
    T pop(){
        return arr[top--];
    }
};

int main() {
    
    stack <float> f; //stack <float> sinifinib nesnesi
    f.push(1.6);
    f.push(0.6);
    f.push(19.98);
    cout << "1: " << f.pop() << endl;
    cout << "2: " << f.pop() << endl;
    cout << "3: " << f.pop() << endl << endl;
    
    stack <int> i; //stack <int> sinifinin nesnesi
    i.push(16);
    i.push(6);
    i.push(1998);
    cout << "1: " << i.pop() << endl;
    cout << "2: " << i.pop() << endl;
    cout << "3: " << i.pop() << endl << endl;;

    stack <long> l; //stack <long> sinifinin nesnesi
    l.push(123456789L);
    l.push(987654321L);
    l.push(135798642L);
    cout << "1: " << l.pop() << endl;
    cout << "2: " << l.pop() << endl;
    cout << "3: " << l.pop() << endl;

    return 0;
}
