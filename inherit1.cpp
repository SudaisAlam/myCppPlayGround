#include<iostream>
using namespace std;

class a{
    public:

    int p = 1;
    int q = 3;

};

class b : public a{
    public:

    void SUM();
};

int main() {

    b c;

    c.SUM();
}

void b::SUM() {
    int sum;

    sum = p + q;
    cout <<"The sum of p and q is: " <<sum <<endl;
    
}
