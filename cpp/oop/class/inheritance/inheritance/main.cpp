#include <iostream>
using namespace std;

class omurgali{
public:
    int yas;
    string isim;
    void ekranaBas(){
        cout << "Omurgalinin ismi: " << isim << endl;
        cout << "Omurgalinin yasi: " << yas << endl;
    }
};

//miras alma
class surungen:public omurgali{
public:
    surungen(int y, string i){
        yas = y;
        isim = i;
    }
};

class kus:public omurgali{
public:
    kus(int y, string i){
        yas = y;
        isim = i;
    }
};

int main() {
    
    kus k(3, "tweety");
    surungen s(0, "yilan");
    k.ekranaBas();
    cout << endl;
    s.ekranaBas();
    
    return 0;
}
