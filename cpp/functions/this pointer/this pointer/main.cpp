#include <iostream>
using namespace std;

//This Göstericisi

class vip{
private:
    string name,surname,company;
public:
    vip(string n, string sn, string c){
        this->name=n;
        this->surname=sn;
        this->company=c;
    }
    string write(){
        return this->name+this->surname+this->company;
    }
    void showit(){
        string a;
        a=this-> write();
        cout << a << endl;
    }
};

int main() {
    
    vip person("Bill ","Gates ", "Microsoft");
    person.showit();
    
    return 0;
}
