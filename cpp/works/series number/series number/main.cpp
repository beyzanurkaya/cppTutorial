#include <iostream>
using namespace std;

int seriesOfA(int a){
    
    if (a < 0) {
        return -1;
    } else if (a == 0) {
        return 2;
    } else if (a == 1) {
        return 3;
    } else {
        return seriesOfA(a-1) * seriesOfA(a-2);
    }
}

int seriesOfB(int b){
    
    if (b % 2 != 0 || b < 0 ) {
        return -1;
    } else if (b == 0) {
        return 0;
    } else if (b == 2) {
        return 1;
    }else {
        return seriesOfB(b-2) + seriesOfB(b-4);
    }
    
}

int main() {
    
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    cout << seriesOfA(a) << endl;
    cout << "-------------------------------------------\n";
    
    int b;
    cout << "Enter a number: ";
    cin >> b;
       
    cout << seriesOfB(b) << endl;
    return 0;
}
