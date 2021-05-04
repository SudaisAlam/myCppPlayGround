#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> vec;
    vector<int> vec2;

    vec.assign( 5, 3);
    vec2.assign(6, 2);
    /*cout <<"before" <<endl;

    for(int i=0 ; i<vec.size()-1 ; i++) {
        cout <<vec[i];
    }
    cout <<endl;
    for(int i=0 ; i<vec2.size()-1 ; i++) {
        cout <<vec2[i];
    }


    vec.swap(vec2);

    cout <<"after" <<endl;
    for(int i=0 ; i<vec.size()-1 ; i++) {
        cout <<vec[i];
    }
    cout <<endl;
    for(int i=0 ; i<vec2.size()-1 ; i++) {
        cout <<vec2[i];
    }*/

    //vec.insert(vec.begin() , 10);
    //vec.erase(vec.begin());

    vec.push_back(5);

    cout <<vec.back();
}