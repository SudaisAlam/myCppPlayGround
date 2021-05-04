#include<iostream>
using namespace std;
void binary(int N);

int main() {
    
    binary(6);
}
void binary(int N) {
    int i, arr[50];
    for( i=0 ; N>0 ; i++) {

        arr[i] = N%2;

        N = N/2;
    }
    for( i = i-1 ; i>=0 ; i--) {
        cout <<arr[i];
    }

}