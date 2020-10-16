#include <iostream>
using namespace std;

int main() {
    
    int i;
       cout << "Enter a number: ";
       cin >> i;
       
       do{
           cout << ++i << "  ";
       }while (i<100); //Parantezin içindeki sinama ifadesi gerceklesenene kadar yukaridaki islemi gerceklestirir.
    cout << endl;
    
    
       int num, a=0;
       cout << "Enter a number:";
       cin >> num;
       do {
           a++;
           cout << a << "  " ;
       } while (a<num-1);
    cout << endl;
    return 0;
}
