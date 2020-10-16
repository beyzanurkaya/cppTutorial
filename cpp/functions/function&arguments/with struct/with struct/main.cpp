#include <iostream>
using namespace std;

struct person{
    string name,surname;
    int age;
};
void writingData(){
    person p1;
    cout << "Enter your name: ";
    cin >> p1.name;
    cout << "Enter your surname: ";
    cin >> p1.surname;
    cout << "Enter your age: ";
    cin >> p1.age;
    
    cout << "Your name is " << p1.name << endl;
    cout << "Your surname is " << p1.surname << endl;
    cout << "Your age is " << p1.age << endl;
    
}
int main() {
    
    writingData();
    
    return 0;
}
