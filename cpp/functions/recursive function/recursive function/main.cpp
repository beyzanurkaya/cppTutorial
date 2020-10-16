#include <iostream>
using namespace std;

int factorial(int i){
    if (i<=1) {
        return 1;
    }else
        return (factorial(i-1)*i);
}

int main() {
    
    int j;
    cout << "Enter a number: ";
    cin >> j;
    cout << j << "!: " << factorial(j) << endl;

    return 0;
}
