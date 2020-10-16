#include <iostream>
using namespace std;

void func(){
    
    int n;
    while (n!=0) { //Parantezin icindeki sinama ifadesi gerceklesene kadar islem devam eder.
        cout << "Enter a number: ";
        cin >> n;
    }
}

void star(){
    
    int i=5,j; //i satir atamasidir.
    
    while (i>=1) {
        j=1;
        
        while (j<=10) {
            cout << "*";
            j++;
            
        }
        cout << endl;
        i--;
        
    }
}

int main() {
    
    star();
    
    int bottom,top;
    cout << "Pick a bottom value: ";
    cin >> bottom;
    cout << "Pick a top value: ";
    cin >> top;
    
    while (bottom<top-1) {
        
        cout << ++bottom << "  ";
        
    }cout << endl;
    
    func();
    cout << "You're out." << endl;

    
    
    return 0;
}
