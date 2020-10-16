#include <iostream>
using namespace std;

template <class T, int n>
class Arr{
private:
    T arr[n];
public:
    Arr(){}
    explicit Arr(const T& v);
    virtual T & operator [] (int i);
    virtual T operator [] (int i) const;
};

template <class T, int n>
Arr<T, n> :: Arr(const T& v){
    for (int i = 0; i < n; i++) {
        arr[i] = n;
    }
};

template <class T, int n>
T & Arr <T, n> :: operator[](int i){
    if (i < 0 || i>=n) {
        cerr << "Dizi sinirinda hata: " << i << "boyutun disinda.\n";
        exit(EXIT_FAILURE);
    }
    return arr[i];
};

template <class T, int n>
T Arr <T, n> :: operator[](int i) const{
    if (i < 0 || i>=n) {
        cerr << "Dizi sinirinda hata: " << i << "boyutun disinda.\n";
        exit(EXIT_FAILURE);
    }
    return arr[i];
};

int main() {
    
    Arr<int, 10> toplam;
    Arr<double, 10> ortalama;
    Arr<Arr<int, 5>, 10> ikiBoyutDizi;
    
    int i, j;
  
    for (i = 0; i < 10; i++) {
          toplam[i] = 0;
          for (j = 0; j < 5; j++) {
              ikiBoyutDizi[i][j] = (i + j) * (j + 1);
              cout.width(2);
              cout << ikiBoyutDizi[i][j] << "  ";
              toplam[i] += ikiBoyutDizi[i][j];
          }
        ortalama[i] =(double)toplam[i] / 10;
        cout << ": toplam = ";
        cout.width(3);
        cout << toplam[i] << ", ortalama = " << ortalama[i] << endl;
      }
    
    return 0;
}
