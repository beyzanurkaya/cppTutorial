#include <iostream>
using namespace std;

class Sayac{ //temel sinif
protected: //private olsa alt siniflardan erisim olmaz.
    unsigned int sayac;
public:
    Sayac(): sayac(4){}
    Sayac(int c): sayac(c){}
    unsigned int getSayac() const{
        return sayac;
    }
    Sayac operator ++ (){
        return Sayac(++sayac);
    }
};

class azalanSayac : public Sayac{ //alt sinif
public:
    Sayac operator -- (){
        return Sayac(--sayac);
    }
};

class yeniSayac : public Sayac{
public:
    yeniSayac(): Sayac(){}
    yeniSayac(int c) : Sayac(c){}
    yeniSayac operator -- (){
        return yeniSayac(--sayac);
    }
};

class Stack{
protected:
    enum {M=3};
    int arr[M];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(int deg){
        arr[++top] = deg;
    }
    int pop(){
        return arr[top--];
    }
};

class yeniStack : public Stack{
public:
    void push (int deg){
        if(top>= M-1){
            cout << "Stack dolu.\n";
            
        }
        Stack::push(deg); //Stack sinifindaki push fonksiyon cagiriliyor.
    }
    int pop(){
        if (top <0){
            cout << "Stack bos.\n";
        }
        return Stack::pop(); //Stack sinifindaki pop fonksiyon cagiriliyor.
    }
};

int main() {
    
    yeniStack s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    
    return 0;
}
