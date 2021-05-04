#include<iostream>
using namespace std;

class Date{

    int day;
    int month;

    public:

    Date(int new_month, int new_day);
    Date();
    void output();
    int get_month();
    int get_day();

};

int main() {
    Date birthday(7, 8);
    Date today(9, 10);

    cout <<"Your birthday is on: ";
    birthday.output();
    cout <<endl;
    cout <<"The date today is: ";
    today.output();
    cout <<endl;

    return 0;

}
Date::Date(int new_month, int new_day) {

    day = new_day;
    month = new_month;
}
void Date::output() {

    cout <<get_month() <<" / " <<get_day();
}
int Date::get_month() {
    return month;
}
int Date::get_day() {
    return day;
}