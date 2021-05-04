#include<iostream>
using namespace std;

class electricitybill{
    private:
        int id;
        int units;
        double bill;
    
    public:
        void set( int id, int units) {
            id = id;
            units = units;
        }
        
        void calc(int units) {
            if( units < 50 ) {
                bill = units/2;
            }else if( units > 50 && units < 150) {
                units -= 50;
                bill = (25) + (units*0.75);
            }else if(units>150 && units < 250) {
                units -= 150;
                bill = 25 + 75+ (units*0.20);
            }else if(units > 250) {
                units -= 250;
                bill = 25 + 75 + 120 +(units * 1.50);
            }

        }
        double get_bill(){
            return bill;
        }

};
int main() {
    electricitybill ele;

    ele.set(2, 251);
    ele.calc(150);
    cout <<"the bill is: " <<ele.get_bill() <<endl;

    return 0;
}