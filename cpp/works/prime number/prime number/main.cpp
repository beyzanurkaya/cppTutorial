#include <iostream>
using namespace std;

int main() {
   
    int num, counter = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num == 1) {
        cout << "1 is not a prime number.\n";
    } else if (num == 2){
        cout << "2 is the smallest prime number.\n";
    } else if (num % 2 == 0) {
        cout << num << " is not a prime number.\n";
    } else {
        while (counter < num - 1) {
            counter++;
            if (num % counter == 0) {
                cout << num << " is not a prime number.\n";
                break;
            } else if (counter + 1 == num){
                cout << num << " is a prime number.\n";
            }
        }
    }
    
   
    
    return 0;
}
