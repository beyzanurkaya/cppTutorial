#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int t=1, s=1;
    while (t<100) {
        cout << setw(2) << s;
        cout << setw(5) << t << endl;
        ++s;
        t=2*t+s;
    }
    return 0;
}

