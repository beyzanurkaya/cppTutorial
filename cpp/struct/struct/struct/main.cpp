#include <iostream>
using namespace std;

//YAPI(STRUCT) VERİ TİPİ

const int M=80;
struct Employee{ //Struct, tipleri farklı olabilen birden çok veriyi saklar.
    char name[M],surname[M];
    int age;
};

Employee writing(){
    
    Employee num1;
    cout << "Enter your name: ";
    gets(num1.name);
    cout << "Enter your surname: ";
    cin >> num1.surname;
    cout << "Enter your age: ";
    cin >> num1.age;
    
    //cout << "Your name is " << num1.name << endl;
    //cout << "Your surname is " << num1.surname << endl;
    //cout << "Your age is " << num1.age << endl;
    
    return num1;
}
//GÖSTERİM 1
struct person1{
    char *name, *surname;
    int age;
};

//GÖSTERİM 2
struct person2{
    char *name, *surname;
    int age;
};

//GÖSTERİM 3
struct person3{
    char *name, *surname;
    int age;
}num3={"Sevval", "Metlek", 20};

int main() {
    
    Employee num=writing();
    cout << "Your name is " << num.name << endl;
    cout << "Your surname is " << num.surname << endl;
    cout << "Your age is " << num.age << endl;
    
    //GÖSTERİM 1
    
    person1 num1;
    num1.name="Beyza Nur";
    num1.surname="Kaya";
    num1.age=19;
    
    cout << "Person's name is " << num1.name << endl;
    cout << "Person's surname is " << num1.surname << endl;
    cout << "Person's age is " << num1.age << endl << endl;
    
    //GÖSTERİM 2
    
    person2 num2={"Ece Deniz", "Koksal", 20};
    cout << "Person2's name is " << num1.name << endl;
    cout << "Person2's surname is " << num1.surname << endl;
    cout << "Person2's age is " << num1.age << endl << endl;
    
    //GÖSTERİM 3
    
    cout << "Person3's name is " << num3.name << endl;
    cout << "Person3's surname is " << num3.surname << endl;
    cout << "Person3's age is " << num3.age << endl;
    
    return 0;
}
