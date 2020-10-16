#include <iostream>
#include <iomanip>
using namespace std;

void averageOfNumbers(){
    
    int s;
    cout << "How many number you're gonna enter?";
    cin >> s;
    int numbers[s];
    int result = 0;
    
    for (int i = 0; i < s; i++) {
        cout << i+1 << "th number: ";
        cin >> numbers[i];
        result += numbers[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "Average of numbers is " << float(result)/float(s) << endl;
    
}

int main() {
    
    averageOfNumbers();
    
    return 0;
}
