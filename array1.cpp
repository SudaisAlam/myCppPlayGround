#include<iostream>

using namespace std;

int main() {

    int arr[4];
//C/C++: clang++ build active file ver(1
    int *ptr;

    ptr = arr;
    *ptr = 10;

    ptr++;

    *ptr = 5;

    ptr = &arr[3];

    *ptr = 5;

    ptr = arr;


    *(ptr + 2) = 8;

    for(int i=0 ; i<4 ; i++) {

        cout <<"The value of arr[" <<i<< "] is " <<arr[i]<< endl;

    }
    return 0;

} 