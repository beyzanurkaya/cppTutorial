#include <iostream>
using namespace std;

void cube(){
    int i;
    cout << "Enter a number: ";
    cin >> i;
    cout << "Cube of number= " <<  i*i*i << endl;
}
void square(){
    int j;
    cout << "Enter a number: ";
    cin >> j;
    cout << "Square of number= " << j*j << endl;
}
int sum(int a=0, int b=20){
    int result;
    result= a+b;
    return result;
}
int main(){
    cube();
    square();
    int a =100;
    int b=200;
    cout << "Result (no value) is " << sum() << "." << endl;
    cout << "Result (with value) is " << sum(a,b) << "." << endl;
    return 0;
}


