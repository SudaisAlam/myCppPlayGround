#include<iostream>
using namespace std;

template<class type, class data>
type average(type x, data y) {
    
    return (x * y);

}

int main() {

    float result;

    result = average<float , int>(1.5, 2);

    cout <<result <<endl;

    return 0;
}
