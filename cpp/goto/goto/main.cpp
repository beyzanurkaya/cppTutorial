#include <iostream>
using namespace std;

int main() {
    
   start:
    int i;
    cout << "Enter a number: ";
    cin >> i;
    for (; i<=22;i+=2){
        if (i==12)
            continue; //sayi icin herhangi bir islem yapilmaz ve dongunun basina donulur
        if (i==18)
            break; //dongu burda son bulur
        cout << i << "  ";
    }cout << endl;
    goto start;
    
    return 0;
}
