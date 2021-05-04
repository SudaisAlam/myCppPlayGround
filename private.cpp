#include<iostream>
using namespace std;

class Birthday{

    public:

    void output();
    void set(int New_day, int New_month);
    int get_month();
    int get_day();

    private:

    void check_day();
    int day;
    int month;

};

int main() {

    Birthday birth, today;

    today.set(1,12);
    cout <<"Today date is: \n";
    today.output();

    birth.set(1,3);
    cout <<"Birth date is: \n";
    birth.output();

    if( today.get_month() == birth.get_month() && today.get_day() == birth.get_day()) {
        cout <<"Happy Birthday!\n";
    } else {
        cout <<"It's not your birthday!\n";
    }

}


void Birthday::output() {
    cout <<"Day = " << day;
    cout <<",month = " << month<<endl;
}
void Birthday::set(int New_day, int New_month) {
    day = New_day;
    month = New_month;
    check_day();
}
void Birthday::check_day(){
    if( month < 1 || month > 12 || day < 1 || day > 31 ) {
        exit(1);
    }
}
int Birthday::get_month() {
    return month;
}
int Birthday::get_day() {
    return day;
}
