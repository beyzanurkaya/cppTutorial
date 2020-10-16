#include <iostream>
using namespace std;

//TYPEDEF

typedef int integer;
typedef char character;
typedef int *pointer;

typedef struct person{
    char *Name,*Surname;
    int Age;
}p;

int main() {
    
    integer x=5;
    character y='B';
    pointer z=&x;
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    p person1;
    person1.Name= "Beyza Nur";
    person1.Surname= "Kaya";
    person1.Age= 19;
    cout << person1.Name << endl;
    cout << person1.Surname << endl;
    cout << person1.Age << endl;
    
    return 0;
}
