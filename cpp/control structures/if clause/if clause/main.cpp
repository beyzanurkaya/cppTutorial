#include <iostream>
using namespace std;

//Kod optimize edilebilir. Dongulerle ve kontrol ifleriyle daha tutarli bir kod haline gelebilir.


void justIf(){
    int age;
       cout <<"Enter your age:";
       cin >> age;
       
       if (age>=18) {
           cout << "Welcome aboard.";
       }
}

void elseIf(){
    int x;
      cout << "Enter a number: ";
      cin >> x;
      if (x<100){
          cout << x << " smaller than 100." << endl;
      } else if (x==100) {
          cout << x << " equal to 100." << endl;
      } else if (x>100) {
          cout << x << " bigger than 100" << endl;
      } else {
          cout << "I don't know." << endl;
      }
}

void ifElse(){
    int midterm, fnal = 0, avr;
      cout <<"Enter your midterm exam mark: ";
      cin >> midterm;
    if (midterm >100) {
        cout << "Invalid value. Try again...\n ";
        cout << "Enter your midterm exam mark: ";
        cin >> midterm;
    } else {
        cout << "Enter your final exam mark: ";
        cin >> fnal;
        
        if (fnal >100) {
               cout << "Invalid value. Try again...\n ";
               cout << "Enter your final exam mark: ";
               cin >> fnal;
        }
    }
      avr= (midterm+fnal)/2;
      cout << "Your mark: " << avr << endl;
      if (avr>=50) {
          cout << "You passed.\n";
      } else {
          cout << "You failed.\n";
      }
}

void ifOperator(int a, int b){
    
    int c= (a < b) ? a : b;
    cout << "c: " << c;
    
    cout << "\n-----------------------------\n";
    
    if (a < b) {
        c= a;
    } else {
        c= b;
    }
    
}

void ifOperator2(int i){
    
    char j= (i % 2) ? 't' : 'f';
    cout << "bool: " << j;
    
    cout << "\n-----------------------------\n";
    
    if ((i % 2) == 0) {
        cout << "even " << endl;
    } else {
        cout << "odd " << endl;
    }
    
}
int main() {
    
    justIf();
    cout << "\n-----------------------------\n";
    elseIf();
    cout << "-----------------------------\n";
    ifElse();
    cout << "-----------------------------\n";
    ifOperator(6, 7);
    cout << "-----------------------------\n";
    ifOperator2(12);
    
    return 0;
}
