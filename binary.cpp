#include<iostream>
using namespace std;

int binary(int N);

int main() {

    cout <<binary(12312
    );

}

int binary(int N) {
    int array[50], i, array2[20], j, a, b, p;
    

    for( i=0 ; N>0 ; i++) {

        array[i] = N%2;

        N = N/2;
    }

    p = i;

    for( i = 0 ; i<p ; i++) {
        a = 0;
        if( array[i] == 1) {
            for( j=i+1 ; array[j]==0 ; j++) {
                a++;
            }
            
        }
        array2[b] = a;
        b++;
    }
    for ( b = b-1 ; b>=0 ; b--) {
        if(array2[0] < array2[b]) {
            array2[0] = array2[b];
        }
    }
    return array2[0];
}