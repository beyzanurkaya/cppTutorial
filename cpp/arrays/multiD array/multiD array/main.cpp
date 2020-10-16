#include <iostream>
using namespace std;

//MULTI-DIMENTION ARRAY

void ElementArray(){
    int array[4][2]={{16,6},{6,2},{24,8},{13,4}};
    cout << "Elements of array: \n";
    for (int i=0; i<4; i++) {
        for (int j=0; j<2; j++) {
            cout << "[" << i << "]" << "[" << j << "]: ";
            cout << array[i][j] << endl;
        }
    }
}

void Matrix(){
    int matrix[3][3],matrix2[3][3],matrix3[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << "A MATRIS " << "[" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << "B MATRIS " << "[" << i << "]" << "[" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            matrix3[i][j]=matrix[i][j]+matrix2[i][j];
        }
    } cout <<"\nSum of Matrices\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    ElementArray();
    Matrix();
    
    return 0;
}

