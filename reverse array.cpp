#include<iostream>
using namespace std;

void reverse();
int main() {

    reverse();
}

void reverse() {
    
    int i, a, temp, b;

    cin >>a;
    int N[a];
    b = a;
    b--;
    for( i=0 ; i<a ; i++) {
        cout <<"array[" <<i <<"] = ";
        cin >>N[i];
    }
    for( i=0 ; i<(a/2) ; i++) {

        temp = N[i];
        N[i] = N[b];
        N[b] = temp;
        b--;
    }
    cout <<"The reversed array will be: " <<endl;

    for( i=0 ; i<a ; i++) {
        cout <<N[i];
    }


}