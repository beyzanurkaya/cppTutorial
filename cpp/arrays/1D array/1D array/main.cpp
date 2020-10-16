#include <iostream>
using namespace std;

void oneDimention(){
    
    int num[4]={1,2,3,4}; //4 elemanli sayi dizisi.
    for (int i=0; i<4; i++) {
        cout << "num[" << i+1 << "]: " << num[i] << endl;
    }
    
    const int n=6;
    double array1[n]; //6 elemanli sayi dizisi.
    double total=0;
    for (int j=0; j<n; j++) {
        cout << "Enter a integer: "; //Dizi elemanlarinin atanmasi.
        cin >> array1[j];
    }
    for (int j=0; j<n; j++) { //Dizi elemanlarinin kullanilmasi.
        total+=array1[j];
    }
    for (int k=0; k<n; k++) {
        cout << array1[k] << "  ";
    }
    double avr=total/n;
    cout << endl;
    cout << "Average: " << avr << endl;
    
    short array2[6]= {1,2}; //Atanmayan degerler icin derleyicinin kendisi 0'i atar.
    for (int i=0; i<6; i++) {
        cout << array2[i] << "  ";
    }
    cout << endl;
    
    //ORNEK ATAMALAR
    //int array[4];
    //int array[]={1,2,3,4};
    
}

void Integer(){
    int array1[]={1,6,0,6,9,8};
    int array2[6];
    int i;
    for (i=0; i<6; i++) {
        cout << "[" << i+1 << "]= " << array1[i] << "  ";
    }
    cout << endl;
    for (i=0; i<6; i++) {
        cout << "[" << i+1 << "]= ";
        cin >> array2[i];
    }
    int array3[6];
    for (int j=0; j<6; j++) {
        array3[j]= array1[j] + array2[j];
    }cout << endl;
    for (int k=0; k<6; k++) {
        cout << "[" << k+1 << "]= " << array3[k] << "  ";
    }
}

int main() {
    
    oneDimention();
    Integer();
    
    return 0;
}
