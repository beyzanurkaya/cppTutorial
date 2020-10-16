#include <iostream>
using namespace std;

int exponential(int,int);
int factorial(int);
int main() {
    
    int base,power;
    cout << "Base: ";
    cin >> base;
    cout << "Power: ";
    cin >> power;
    cout << base << "^" << power << "=" << exponential(base,power) << endl;
    
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Factorial of this number is " << factorial(a) << endl;
    return 0;
}
int exponential(int x, int y){
    int  t=1;
    for (int i=1; i<=y; i++)
        t=t*x;
    return t;
}
int factorial (int a)
{
    int i,fact=1;
    for (i=a; i>0; i--)
        fact= fact*i;
    return fact;
}

















