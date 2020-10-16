#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;
    
    v[0] = 20;
    v[3] = 23;
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;

    double arr[] = {1.6, 0.6, 1.9, 9.8};
    vector<double> vA(arr, arr+4); //vektore ilk deger olarak arr gonderiliyor.
    vector<double> vd(4); //4 elemanli boc bir vektor.
    
    while (!vd.empty()) {
           cout << vd.back() << "  ";
           vd.pop_back();
    }
    cout << endl;
    //cout << vd.back() << "  ";
    vA.swap(vd);
    //cout << vd.back() << "  ";
    
    while (!vd.empty()) {
        cout << vd.back() << "  "; //vectordeki son elemani dondurur.
        vd.pop_back(); //vectordeki son elemani vektorden cikartir.
    }
    cout << endl;
    
    int diz[] = {100, 110, 120, 130};
    vector<int> vDiz(diz, diz+4);
    cout << "Eleman eklemeden once: ";
    for (int i = 0; i < vDiz.size(); i++) {
        cout << vDiz[i] << "  ";
    }cout << endl;
    
    vDiz.insert(vDiz.begin()+2, 115); //2 numarali yere 115 eklendi.
    
    cout << "Eleman ekledikten sonra: ";
       for (int i = 0; i < vDiz.size(); i++) {
           cout << vDiz[i] << "  ";
       }cout << endl;
    
    vDiz.erase(v.begin()+1); //1 numarali yeri sil.
   
    cout << "Eleman silindikten sonra: ";
          for (int i = 0; i < vDiz.size(); i++) {
              cout << vDiz[i] << "  ";
          }cout << endl;
    
    return 0;
}
