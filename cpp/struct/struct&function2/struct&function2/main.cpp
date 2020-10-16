#include <iostream>
using namespace std;

//YAPI VE FONKSIYONLAR

struct Date{
    int day, month, year;
};

struct Date Age(struct Date, struct Date);

int main() {
    
    struct Date today, birthday, live;
    cout << "Enter today's date (Day/Month/Year): " << endl;
    cin >> today.day >> today.month >> today.year;
    cout << "Enter your birthday (Day/Month/Year): " << endl;
    cin >> birthday.day >> birthday.month >> birthday.year;
    
    live= Age(today, birthday);
    cout << "You have been living for " << live.day << " days " << live.month << " months and " << live.year << " years." << endl;
    
    return 0;
}

struct Date Age(struct Date x, struct Date y){
    struct Date live= {0, 0, 0};
    if(x.day < y.day){
        x.month-=1;
        live.day= 30+x.day-y.day;
    }else
        live.day=x.day-y.day;
        if(x.month < y.month){
            x.year-=1;
            live.month= 12+x.month-y.month;
        }else
            live.month=x.month-y.month;
            live.year+=x.year-y.year;
            return live;
}
