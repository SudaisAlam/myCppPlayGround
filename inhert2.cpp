#include<iostream>
using namespace std;

class shape{

    int size;
    
    protected:

    int width = 2;
    int height = 2;

    public:

    int area();
};

class traingle : public shape{

    public:

    void print();

};

int main() {

    traingle A;

    A.print();

}

int shape::area() {

    size = width * height;

    return size;
}
void traingle::print() {

    cout <<"The size of the traingle is: " <<area() <<endl;

}
