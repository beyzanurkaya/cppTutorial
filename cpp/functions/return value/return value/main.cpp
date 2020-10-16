#include <iostream>
using namespace std;

int trying(){
    int x=10;
    return x;
}
int sum() {
    int i,j;
    cout << "Enter two numbers:" << endl;
    cin >> i >> j;
    cout << "Sum of numbers= ";
    return i+j;
}
int main() {
    cout << trying() << endl;
    cout << sum() << endl;
    return 0;
}
