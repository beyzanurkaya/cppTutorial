#include <iostream>
using namespace std;

int main() {
    
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int j=0; j<sizeof(word); j++) { //word.size();
        cout << word[j];
    }cout << endl;
    
    for (int i=sizeof(word)-1; i>=0; i--) {
        cout << word[i];
    }cout << endl;
    
    return 0;
}
