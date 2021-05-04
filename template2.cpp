#include<iostream>
using namespace std;

template<class T>
class sum{
    private:
        T x;
        T y;

    public:
        sum(T a, T b) {
            x = a;
            y = b;
        }
        T add();
};
int main() {

    sum<int> obj( 7, 8);

    cout <<obj.add() <<endl;

    return 0;
}

template<class T>
T sum<T>::add() {
    return x + y;
}