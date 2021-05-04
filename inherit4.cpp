#include<iostream>
using namespace std;

class shape{
    protected:

    float length;

    public:

    shape();
    void setlenght(float l);

};

class traingle : public shape{
    public:

    traingle() : shape() {
        length = 0;
    }
    float area();

};

int main() {
    traingle ar;

    ar.setlenght(3);

    cout <<"Area of the traingle is: " <<ar.area() <<endl;

    return 0;
}
shape::shape() {
    length = 0;
}
void shape::setlenght(float l) {

    length = l;

}
float traingle::area() {
    
    return (length * length / 2);
}