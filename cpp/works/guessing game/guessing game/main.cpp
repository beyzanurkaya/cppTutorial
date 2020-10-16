#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(NULL));
    int x = rand() % 100;
    int num;

    cout << "Enter your guess: ";
    cin >> num;
    
    while (num != x) {
        if (num < x) {
            cout << "UP!!\n";
        } else if (num > x){
            cout << "DOWN!!\n";
        }
        cout << "Try again: ";
        cin >> num;
    }
    
    cout << "Your guess is rigth. The number is " << num << endl;
    

    return 0;
}
