#include<iostream>
using namespace std;

class Birthday{
    public:

    Birthday(int new_month, int new_day);
    Birthday();
    void output();
    int get_day();
    int get_month();
    
    private:

    int day;
    int month;

};
 int main() {
     Birthday sudais(9, 20);

     Birthday laiba;

     cout <<"Laiba's birthday is on: "<<laiba.get_day() <<"/" <<laiba.get_month() <<endl;
     cout <<"Sudais's Birthday is on: " <<sudais.get_day() <<"/" <<sudais.get_month() <<endl;

     if( sudais.get_day() == laiba.get_day() && laiba.get_month() == sudais.get_month()) {
         cout <<"Both of you are born on the same day \n";
         
     }else {
         cout <<"You guys are born on diffrent days\n";
     }

     
     
 }
 Birthday::Birthday( int new_month, int new_day) {
    day = new_day;
    month = new_month;
 }
 Birthday::Birthday() {
     day = 0;
     month = 0;
 }
 int Birthday::get_day() {
     return day;
 }
 int Birthday::get_month() {
     return month;
 }