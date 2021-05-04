#include<iostream>

using namespace std;

int main() {

    int array[5];
    int *ptr;

    ptr = array;

    *ptr = 10;

    ptr++;

    *ptr = 8;

    ptr = &array[2];

    *ptr = 6;

    ptr++;

    *ptr = 4;

    ptr = array;

    *(ptr + 4) = 2;

    for( int i=0 ; i<5 ; i++) {

        cout <<"The value of array["<<i<<"] is "<<array[i]<< endl;

    }

    return 0;
    
}