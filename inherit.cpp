#include<iostream>
using namespace std;

class shape{

    public:

    shape(int l, int w) {
        length = l;
        width = w;
    }
    int get_area() {

        cout <<"This is parent class function.";
    }

    protected :

    int length, width;

};

class square : public shape{

    public:

    
    int get_area() {

        cout <<"Square area = " <<length * width <<endl;
    }
};

class traingle : public shape{

    public:

    int get_area(int l, int w) {

        cout<<"Traingle area = " <<(length * width)/2 <<endl;
    }
};

int main() {

shape *s;
square a;


    
}