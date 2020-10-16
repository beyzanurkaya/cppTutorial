#include <iostream>
using namespace std;

class arr{
private:
    int* ptr;
    int size;
public:
    arr(int s){
        size = s;
        ptr = new int[s];
    }
    ~arr(){
        delete [] ptr;
    }
    int& operator [] (int i){
        return *(ptr + i);
    }
};

int main() {
  
    int i,j;
    const int arrS = 10;
    arr a(arrS);
    for (i = 0; i < arrS; i++)
        a[i] = 3 * i;
    
    for (j = 0; j < arrS; j++)
        cout << a[j] << "  ";
    
    
      int arr[3] = {16, 6, 98};
      cout << *(arr) << endl; //dizinin isminin pointeri dizinin ilk elemanini isaret eder.
      cout << arr << endl << endl; //dizinin kendisi bir adresi isaret eder.
      for (int i = 0; i < 3; i++) {
          cout << *(arr +i) << " -- " << arr[i] << " -- " << &arr[i] << endl;
          
      }
      cout << endl;
      int dizi[3] = {1, 2, 3};
      int *p;
      p = dizi; //dizinin baslangic adresi bir pointera ataniyor.
      for (int i = 0; i < 3; i++) {
          cout << *(dizi +i) << " -- " << dizi[i] << " -- " << &dizi[i] << " -- " << *(p + i) << " -- " << (p + i) << endl; //p ve dizi ayni seyi karsiliyor.
          
      }
    
    return 0;
}
