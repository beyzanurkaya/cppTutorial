#include <iostream>
using namespace std;

class toplama{
    double x,y;
public:
    
    toplama(){};
    toplama(double a, double b){
        x = a;
        y = b;
    }
    toplama operator + (toplama a){
        toplama temp;
        temp.x = x + a.x;
        temp.y = y + a.y;
        
        return temp;
    }
    toplama operator = (toplama b){
        
        x = b.x;
        y = b.y;
        
        return *this;
    }
    
    void ekranaBas(){
        cout << "x: " << x << "  y: " << y << endl;
    }
    
};

int main() {
    
    toplama t(1.2, 1.8), r(4.6, 5.1), s;
    s = t + r;
    s.ekranaBas();
    
    return 0;
}
