#include <iostream>
using namespace std;

int main() {
    
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    while (i <= num) {
        cout << i << "  ";
        i++;
    }
    cout << endl;
    return 0;
}
