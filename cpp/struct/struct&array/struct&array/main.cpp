#include <iostream>
using namespace std;

//YAPI VE DIZILER

typedef struct Date{
    char *name;
    int day, month, year;
}b;

typedef struct person{
    char *name, *surname;
    int age;
}p;

int main() {
    
    b birthday[3]={"Beyza Nur: ", 16, 6, 1998, "Ece Deniz: ", 30, 4, 1998, "Sevval: ", 4, 8, 1998};
    
    for (int i=0; i<3; i++) {
        cout<< birthday[i].name << birthday[i].day << "/" << birthday[i].month << "/" << birthday[i].year << endl;
    }
    
    p person[2]={"Beyza Nur", "Kaya", 20, "Bill", "Gates", 62 };
    
    for (int j=0; j<2; j++) {
            cout << person[j].name << " " << person[j].surname << " is " << person[j].age << "." << endl;
        }
   
    return 0;
}
