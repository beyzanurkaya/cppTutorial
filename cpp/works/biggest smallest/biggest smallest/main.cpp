#include <iostream>
using namespace std;

void biggestNumber(){
    
    int s;
    int biggest = 0;
    cout << "How many number you're gonna enter? ";
    cin >> s;
    int numbers[s];
    
    for (int i = 0; i < s; i++) {
        cout << i+1 << "th number: ";
        cin >> numbers[i];
        if (numbers[i] > numbers[i+1]) {
            biggest = numbers[i];
        }
    }
    cout << "The biggest number is " << biggest << endl;
}

void smallestNumber(){
    
    int s;
    int smallest = 0;
    cout << "How many number you're gonna enter? ";
    cin >> s;
    int numbers[s];
    
    for (int i = 0; i < s; i++) {
        cout << i+1 << "th number: ";
        cin >> numbers[i];
        if (numbers[i] < numbers[i+1]) {
            smallest = numbers[i];
        }
    }
    cout << "The smallest number is " << smallest << endl;
}
int main() {
    
    biggestNumber();
    smallestNumber();
    return 0;
}
