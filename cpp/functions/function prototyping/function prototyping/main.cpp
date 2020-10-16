#include <iostream>
using namespace std;

int max(int,int,int); //Fonksiyon prototipi.
int main() {
    int x,y,z;
    cout << "Enter three numbers:" << endl;
    cin >> x >> y >> z;
    cout << "Max value is " << max(x,y,z) << "." << endl; //Fonksiyon çağırma ifadesi.
    
    return 0;
}
int max(int a,int b,int c) {
    if (a>b && a>c) {
        return a;
    }else if(b>a && b>c){
        return b;
    }else if(c>a && c>b) {
        return c;
    }else{
        cout << "not exist." << endl;
        return 0;
    }
}
