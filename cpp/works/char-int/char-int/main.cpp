#include <iostream>
using namespace std;

int main() {
    
    //char-int karşılaştırımı.
    
    char ch1= 'A';
    cout << "ch1: " << ch1 << endl;
    int i= ch1;
    cout << ch1 << "'s ASCII character code: " << i << endl;
    cout << "Enter a character: ";
    cin >> ch1;
    i= ch1;
    cout << ch1 << "'s ASCII character code: " << i << endl;
    cout << "Enter a integer: ";
    cin >> i;
    char ch3= i;
    cout << i << " 's ASCII character: " << ch3 << endl;
    
    char ch4;
    cout << "Enter a character: ";
    cin >> ch4;
    int j= ch4;
    cout << "Entered character: " << ch4 << endl;
    cout << "The value of this character: " << int(j) << endl;
    ch4= 75;
    cout << "The character corresponding to 75: " << ch4 << endl;
    
    return 0;
}
