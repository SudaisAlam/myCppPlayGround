#include<iostream>
using namespace std;

int main() {

    string z;
    int x,y;

    cout <<"Enter number 1: "<<endl;
    cin >>x;
    cout <<"Enter symbol: "<<endl;
    cin >>z;
    cout <<"Enter number 2: "<<endl;
    cin >>y;

    cout <<"The Answer is: ";


    if (z == "+") {
        cout <<x+y <<endl;
    }else if (z == "-") {
        cout <<x-y <<endl;
    }else if(z == "*") {
        cout <<x*y <<endl;
    }else if(z == "/") {
        cout <<x/y <<endl;
    }else{
        cout <<"WRONG SYMBOL!" <<endl;
    }
    
    

}