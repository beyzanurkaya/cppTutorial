#include <iostream>
using namespace std;

void degistir(int* a, int* b){
    
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

void sirala(int* d1, int* d2){
    
    if (*d1 > *d2) {
        int temp = *d1;
        *d1 = *d2;
        *d2 = temp;
    }
}

void diziSirala(int* g, int n){
    
    void sirala(int*, int*);
    int j,k;
    for (j = 0; j < n -1; j++) {
        for (k = j+1; k < n; k++) {
            sirala(g+j, g+k);
        }
    }
}

int main() {
    
    int x = 6, y = 12;
    cout << "x = " << x << " y = " << y << endl;
    degistir(&x, &y);
    cout << "yeni x = " << x << " yeni y = " << y << endl;
    
    
    cout << "--------------\n";
    const int N = 3;
    int arr[N] = {16, 6, 98};
    diziSirala(arr, N);
    for (int j = 0; j < N; j++) {
        cout << *(arr +j) << "  ";
    }
    cout << endl;
    
    return 0;
}
