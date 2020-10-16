#include <iostream>
using namespace std;

template <typename T>
class beta{
private:
    template <typename D>
    class Sakla{
    private:
        D var;
    public:
        Sakla(D d = 0) : var(d){ }
        void yaz() const{
            cout << var << endl;
        }
        D dondur() const {
            return var;
        }
    };
    Sakla <T> q;
    Sakla <int> n;
public:
    beta(T t, int i) : q(t), n(i){}
    template <typename U>
    U blab(U u, T t){
        return (n.dondur() + q.dondur()) * u/t;
    }
    void Yaz() const{
        q.yaz();
        n.yaz();
    }
};

int main() {
    
    beta <double> data(6.5, 5);
    data.Yaz();
    cout << data.blab(15, 6.4) << endl;
    
    
    return 0;
}
