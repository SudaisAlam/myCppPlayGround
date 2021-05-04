#include <iostream>
using namespace std;

class shape {
    public:
    shape() {
         lenght = 0;
    }
    void setlenght(int l) {
        lenght = l;
    }
    protected:
        int lenght;
    
};

class traingle : public shape {
    public:
    traingle() : shape() {
        lenght = 0;
    };
    int get_area() {
        return (lenght * lenght / 2);
    }
};

int main() {
    traingle sq;
    sq.setlenght(5);
    cout <<"The area is: " <<sq.get_area() <<endl;

    return 0;
}