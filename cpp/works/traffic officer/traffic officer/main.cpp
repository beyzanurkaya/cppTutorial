#include <iostream>
using namespace std;

int main() {
    
    int speed;
    char type;
    
    //car: 82
    //bus: 70
    //van: 50
    
    cout << "1 - Car: c\n";
    cout << "2 - Bus: b\n";
    cout << "3 - Van: v\n";
    cout << "Enter type of vehicle: ";
    cin >> type;
    
    cout << "Enter certain speed: ";
    cin >> speed;
    
    if (type == 'c') {
        cout << "\nThe vehicle is a car.\n";
        if (speed >= 82) {
            cout << "Speeding ticket!! You have to slow down\n";
        } else {
            cout << "You're okay.\n";
        }
    } else if (type == 'b') {
        cout << "\nThe vehicle is a bus.\n";
        if (speed >= 70) {
            cout << "Speeding ticket!! You have to slow down\n";
        } else {
            cout << "You're okay.\n";
        }
    } else if (type == 'v') {
        cout << "\nThe vehicle is a van.\n";
        if (speed >= 50) {
            cout << "Speeding ticket!! You have to slow down\n";
        } else {
            cout << "You're okay.\n";
        }
    }
    
    return 0;
}
