#include <iostream>
#include <list>
using namespace std;

int main() {
    
    list<int> liste;
    liste.push_back(30);
    liste.push_back(40);
    liste.push_back(50);
    
    liste.push_front(90);
    liste.push_front(80);
    liste.push_front(70);
    
    for (int i = 0; i < liste.size(); i++) {
        for (int i = 0; i < liste.size(); i++) {
            cout << liste.front() << "  ";
            liste.pop_front();
        }
           cout << liste.back() << "  ";
           liste.pop_back();
    }
    cout << endl;
    
    list<int> L, L2;
    int arr[] = {40, 30, 20, 10};
    int arr2[] = {15, 20, 25, 30, 35};
    
    for (int j = 0; j < 4; j++) {
        L.push_back(arr[j]);
    }
    
    for (int j = 0; j < 5; j++) {
        L2.push_back(arr2[j]);
    }
    
    L.reverse();
    L.merge(L2); //L ve L2 birlestir.
    L.unique();

    while (!L.empty()) {
        cout << L.front() << "  ";
        L.pop_front();
    }

    return 0;
}
