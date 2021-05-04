#include<iostream>
#include<vector>

using namespace std;

vector<int> solution(vector<int> &A, int K);

int main() {
    

}

vector<int> solution(vector<int> &A, int K) {

    int i, a;

    for( i=0 ; i<K ; i++) {
        a = A.back();
        a--;
        for(int j=A.size()-1 ; j>0 ; j--) {
            for(int l=j-1 ; l<j ; l++) {
                A[j] = A[l];
            }
        }
        A[0] = A[a];
    }
    return A;
}