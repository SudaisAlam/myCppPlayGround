#include<iostream>
using namespace std;

int binary(int N);
int main() {

    cout <<binary(12);
}
int binary(int N) {

    int arr[100], a, i, bin, c, d, e, f, g;;

    bin = 0;
    for( i=0 ; N>0 ; i++) {

        arr[i] = N % 2;

        N = N/2;
    } 
    for(i = i-1 ; i>0 ; i--) {

        int b = i;

        if(arr[i] == 1) {
            b--;
            
            while(arr[b] == 0 && b>0) {
                b--;
                bin++;
            }
            switch (bin)
            {
            case 1:
                 c = bin;
                break;
            case 2:
                 d = bin;
                break;
            case 3:
                 e = bin;
                break;
            case 4:
                 f = bin;
                break;
            default:
                 g = bin;
                break;
            }
        }
    }
    if(c > d && c > e && c > f ){
        
    }
    return ;
}