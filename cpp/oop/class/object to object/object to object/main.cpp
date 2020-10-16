#include <iostream>
using namespace std;

class objelerArasi{
private:
    int n;
public:
    void atama(int);
    int ekranaBas();
};

void objelerArasi::atama(int num){
    n = num;
}
int objelerArasi::ekranaBas(){
    return n;
}

int main() {
    
    objelerArasi o1, o2;
    o1.atama(12);
    o2 = o1; //birinci nesnedeki veri ikinci nesneye atandi.
    cout << "1.nesne: " << o1.ekranaBas() << endl;
    cout << "2.nesne: " << o2.ekranaBas() << endl;
    
    return 0;
}
