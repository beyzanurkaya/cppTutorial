#include <iostream>
using namespace std;

int main() {
   
    int x,y,action;
    cout <<"1.Sum" << endl << "2.Subtraction" << endl << "3.Product" << endl << "4.Division" << endl;
    
    cout << "Pick an action: \n";
    cin >> action;
    cout << "Enter two numbers:";
    cin >> x >> y;
    switch (action) {
        case 1:
            cout << "Sum of numbers= " << x+y << endl;
            break;
        case 2:
            cout << "Product of numbers= " << x-y << endl;
            break;
        case 3:
            cout << "Subtraction of numbers= " << x*y << endl;
            break;
        case 4:
            cout << "Divison of numbers= " << x/y << endl;
            break;
        default:
            cout << "No Result.";
            break;
    }
    
    int num;
      cout << "Enter a number between 1 and 5:";
      cin >> num;
      
      switch (num) {
          case 1:
              cout <<"Today is Monday.\n";
              break;
          case 2:
              cout <<"Today is Tuesday.\n";
              break;
          case 3:
              cout <<"Today is Wednesday.\n";
              break;
          case 4:
              cout << "Today is Thursday.\n";
              break;
          case 5:
              cout << "Today is Friday.\n";
              break;
          default: cout << "Weekend.\n";
              break;
      }
    
    return 0;
}
