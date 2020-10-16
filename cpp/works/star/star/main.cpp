#include <iostream>
using namespace std;

void starOut(){
    int t;
    cout << "Enter a number: ";
    cin >> t;
   
    for (int i = 0; i < t; i++) {
        cout << "*\n";
    }
}

void starRectangle(){
    int width, height;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter height of rectangle: ";
    cin >> height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void starLeftTriangle(){
    
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    for (int i = a; i > 0 ; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void starRightTriangle(){
    
    int b;
    cout << "Enter a number: ";
    cin >> b;
    
    for (int i = 0; i < b ; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = b; k > i; k--) {
            cout << "*";
        }
        cout << endl;
    }
}

void starLeftInverseTriangle(){
    
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void starRightInverseTriangle(){
    
    int y;
    cout << "Enter a number: ";
    cin >> y;
    
    for (int i = 0; i < y ; i++) {
        for (int j = y - 1; j > i; j--) {
            cout << " ";
        }
        for (int k = 0; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    
    starRightInverseTriangle();
  
    
    return 0;
}
