#include <iostream>
using namespace std;

int fibonacciNumber(int n){
    
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else{
        return fibonacciNumber(n-1) + fibonacciNumber(n-2);
    }
    
}

int main() {
    
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    cout << fibonacciNumber(a) << endl;
    
    return 0;
}
