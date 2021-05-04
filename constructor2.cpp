#include <iostream>
using namespace std;

class Data {
    private:
        string name;
        int age;
        string no;

    public:
        Data(string a, int b, string c) {
            name = a;
            age = b;
            no = c;
        }
        string get_name() {
            return name;
        }
        int get_age() {
            return age;
        }
        string get_no() {
            return no;
        }

};

int main() {

    Data person1("laiba alam", 20, "03494002448");
    Data person2("sudais alam", 18, "03494002448");
    Data person3("sadeed alam", 16, "03469024003");
    Data person4("ibsam alam", 14, "03494002448");

    cout << person1.get_name() <<endl;
    cout << person1.get_age() <<endl;
    cout << person1.get_no() <<endl;

    cout << person2.get_name() <<endl;
    cout << person2.get_age() <<endl;
    cout << person2.get_no() <<endl;

    cout << person3.get_name() <<endl;
    cout << person3.get_age() <<endl;
    cout << person3.get_no() <<endl;

    cout << person4.get_name() <<endl;
    cout << person4.get_age() <<endl;
    cout << person4.get_no() <<endl;

    return 0;
}