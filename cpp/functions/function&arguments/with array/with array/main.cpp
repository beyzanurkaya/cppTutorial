#include <iostream>
using namespace std;

const int D=8;

int sumArray(int Ary[], int n);
int main() {
    
    int Array[D]= {0, 1, 2, 3, 4, 5, 6, 7};
    cout << "Array's Address is " << Array << endl;
    int total= sumArray(Array, D);
    cout << "After turning array's address is " << Array << endl; //Dizinin fonksiyondan dönüşten sonraki hali.
    cout << "Array's member: ";
    for (int i=0; i<D; i++) {
        cout << Array[i] << " ";
    }cout << endl;
    cout << "Sum of array's member: " << total << endl;
    
    return 0;
}
int sumArray(int Ary[], int n){
    int sum=0;
    for (int j=0; j<n; j++) {
        sum= sum+ Ary[j];
    }
    cout << "In function array's address is " << Ary << endl;
    
    return sum;
}
