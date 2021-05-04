#include<iostream>
using namespace std;

class laptop{
    public:

    void output();
    void Model(string new_Model, int new_year);
    

    private:

    void check_model();
    int year;
    string model;
};

int main() {
    laptop windows, mac;

    mac.Model("M1", 2020);
    mac.output();

    windows.Model("Windows 10", 2020);
    windows.output();

}

void laptop::output() {
    cout <<"Model = "<<model <<endl;
    cout <<"Release year is: " <<year <<endl;
}
void laptop::Model(string new_Model, int new_year) {
    year = new_year;
    model = new_Model;

}