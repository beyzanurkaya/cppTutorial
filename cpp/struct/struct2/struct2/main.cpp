#include <iostream>
using namespace std;

//IC ICE YAPILAR

struct length1{
    int feet;
    float inch;
};
struct room{
    length1 width;
    length1 height;
};

void Room(){
    room bedroom;
    bedroom.width.feet=13;
    bedroom.width.inch=6.5;
    bedroom.height.feet=10;
    bedroom.height.inch=0.0;
    
    float W= bedroom.width.feet+bedroom.width.inch/12;
    float H= bedroom.height.feet+bedroom.height.inch/12;
    cout << "Bedroom area is " << W*H << " feet square." << endl;
}

//YAPILARDA ATAMA ISLEMLERI

struct length2{
    int feet;
    float inch;
};

int main() {
    
    Room();
    
    length2 l1= {11, 6.25};
    length2 l2;
    length2 l3;
    
    cout << "Enter feet: ";
    cin >> l2.feet;
    cout << "Enter inch: ";
    cin >> l2.inch;
    
    l3.inch= l1.inch+l2.inch;
    l3.feet=0;
    
    if (l3.inch>= 12.0) {
        l3.inch -= 12.0;
        l3.feet++;
    }
    l3.feet += l1.feet+l2.feet;
    
    cout << l1.feet << " fit. " << l1.inch << " inch." << endl;
    cout << l2.feet << " fit. " << l2.inch << " inch." << endl;
    cout << l3.feet << " fit. " << l3.inch << " inch." << endl;
    
    
    return 0;
}
