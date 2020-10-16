#include <iostream>
using namespace std;

//YAPI VE FONSKIYONLAR
struct person{
    char name[100], surname[100];
    long securityNumber;
    int age;
};

void EnterData(person num1){
    
    cout << "Enter your name: ";
    gets(num1.name);
    cout << "Enter your surname: ";
    cin >> num1.surname;
    cout << "Enter your security number: ";
    cin >> num1.securityNumber;
    cout << "Enter your age: ";
    cin >> num1.age;
    
    cout << "Your name is " << num1.name << "." << endl;
    cout << "Your surname is " << num1.surname << "." << endl;
    cout << "Your security number is " << num1.securityNumber << "." << endl;
    cout << "Your age is " << num1.age << "." << endl;
    
}

int main() {
    /*
    person num1;
    EnterData(num1);
    */
    return 0;
}
