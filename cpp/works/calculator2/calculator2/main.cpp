#include <iostream>
using namespace std;

int main() {
    
    int num, num2;
    char opr;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "+  Summation\n";
    cout << "-  Elimination\n";
    cout << "*  Multiplication\n";
    cout << "/  Division\n";
    cout << "Enter a operation: ";
    cin >> opr;
    cout << "Enter another number: ";
    cin >> num2;
    switch (opr) {
        case '+':
            cout << num << opr << num2 << " = " << num+num2 << endl;
            break;
        case '-':
            cout << num << opr << num2 << " = " << num-num2 << endl;
            break;
        case '*':
            cout << num << opr << num2 << " = " << num*num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Denominator cannot be zero.\n";
                break;
            }else {
                cout << num << opr << num2 << " = " << num/num2 << endl;
            }
            break;
        default:
            cout << "Operation is invalid.\n";
            break;
    }
    return 0;
}
