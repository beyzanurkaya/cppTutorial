#include <iostream>
using namespace std;

class g{
private:
    static int toplam;
    int kimNo;
public:
    g(){
        toplam++;
        kimNo = toplam;
    }
    ~g(){
        toplam--;
        cout << "Kimlik numarasini yok et: " << kimNo << endl;
    }
    static void ToplamiYaz(){
        cout << "Toplam: " << toplam << endl;
    }
    void kimNoYaz(){
        cout << "Kimlik Numarasi: " << kimNo << endl;
    }
};
int g::toplam = 0;

int main() {
    
    g g1;
    g::ToplamiYaz();
    g g2, g3;
    g::ToplamiYaz();
    
    g1.kimNoYaz();
    g2.kimNoYaz();
    g3.kimNoYaz();
    cout << endl;
    return 0;
}
