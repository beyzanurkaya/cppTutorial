#include <iostream>
using namespace std;

void twoDigit(){
    
    double s, s2, result;
    cout << "Enter a number: ";
    cin >> s;
    cout << "Enter another number: ";
    cin >> s2;
    result = s + s2;
    cout.precision(4);
    cout << s << " + " << s2 << " = " << result << endl;
}

void calculator(){
    int opr, s, s2;
    numError:
    cout << "Enter a number: ";
    cin >> s;
    cout << "Enter another number: ";
    cin >> s2;
    oprError:
    cout << "1 - Summation\n";
    cout << "2 - Elimination\n";
    cout << "3 - Multiplication\n";
    cout << "4 - Division\n";
    cout << "Choose the operation you want to do: ";
    
    cin >> opr;
    
    switch (opr) {
        case 1:
            cout << s << " + " << s2 << " = " << s + s2 << endl;
            break;
        case 2:
            cout << s << " - " << s2 << " = " << s - s2 << endl;
            break;
        case 3:
            cout << s << " * " << s2 << " = " << s * s2 << endl;
            break;
        case 4:
            if (s2 == 0) {
                cout << "The denominator cannot be 0.\n";
                goto numError;
                break;
            } else {
                cout << s << " / " << s2 << " = " << s / s2 << endl;
                cout << "Remainder: " << s % s2 << endl;
                break;
            }
        default:
            cout << "Your choose is invalid. Try again.\n";
            goto oprError;
            break;
    }
}

int main() {
    
    twoDigit();
    calculator();

    return 0;
}
