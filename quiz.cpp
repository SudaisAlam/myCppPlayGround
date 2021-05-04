#include<iostream>
using namespace std;

void okay(int a, int b, int c);
 
int main() {
    
    okay(4,6,8);

    return 0;
}

void okay(int a, int b, int c) {

    cout <<a <<",";
    cout <<b;

    for (int i=0 ; i<c ; i++) {

        

        int c = 0;
        c += a+b;

        a = b;
        b = c;

        cout<<", ";

        cout <<c;
    }
}