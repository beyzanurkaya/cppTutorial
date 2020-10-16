#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    
    char letter= ' ', playAgain= 'y';
    string word = " ";
    
    cout << "\t**Text to Binary Convertor**\n\n";
    
    while (playAgain == 'y'){
        
        cout << "Please enter a character, word or phrase: ";
        getline(cin, word, '\n');
        cout << "\nThe binary value for " << word << " is \n";
        
        for (unsigned int wordPosition=0; wordPosition < word.size(); ++wordPosition) {
            letter= word[wordPosition];
            bitset <8> binary(letter);
            
            cout << binary;
        }
        cout << "\n\nWould you like to try again? (y/n)";
        cin >> playAgain;
        
        if (playAgain !='y') {
            cout << "\n\nExiting program.";
            playAgain ='n';
        }
        cin.ignore();
    }
    
    return 0;
}
