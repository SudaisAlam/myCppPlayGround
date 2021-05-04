#include<iostream>
using namespace std;

class fruit{
    int x;

    public:

    fruit();
    void set_amount(int A);
    int price();
};
class orange : public fruit{

};
class banana : public fruit{

    
};
int main() {
    orange p;
    banana q;
    fruit r;
    q.set_amount(12);
    p.set_amount(100);
    
    cout <<"price of the orange is: " <<p.price() * 1.7 <<endl;
    cout <<"price of the banana is: " <<q.price() <<endl;


}
fruit::fruit() {
    x = 0;
}
void fruit::set_amount(int A) {
    x = A;
}
int fruit::price() {

    return (x * 10);
}