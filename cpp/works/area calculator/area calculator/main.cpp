#include <iostream>
using namespace std;
#define pi 3.14

float circleArea(int r){
    return pi*r*r;
}

int squareArea(int a){
    return a*a;
}

int rectangleArea(int h, int w){
    return h*w;
}

int main() {
    
    char shape;
    cout << "C for circle\n";
    cout << "S for square\n";
    cout << "R for rectangle\n";
    cout << "Enter a shape: ";
    cin >> shape;
    switch (shape) {
        case 'C':
            
            int r;
            cout << "Enter radius of circle: ";
            cin >> r;
            cout << "Area of circle: " << circleArea(r) << endl;
    
            break;
        case 'S':
            
            int a;
            cout << "Enter edge of circle: ";
            cin >> a;
            cout << "Area of square: " << squareArea(a)<< endl;
                       
            break;
        case 'R':
            int h, w;
            cout << "Enter height of rectangle: ";
            cin >> h;
            cout << "Enter widht of rectangle: ";
            cin >> w;
            cout << "Area of rectangle: " << rectangleArea(h,w)<< endl;
            
            break;
        default:
            break;
    }

    return 0;
}
