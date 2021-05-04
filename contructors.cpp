#include <iostream>
#include <string>

using namespace std;

class sudais {

    public:
        sudais(string z, int a) {
            Name = z;
            age = a;
        }

        string get_name() {
            return Name;
        }

        int get_age() {
            return age;
        }

    private:
        string Name;
        int age;
};

int main() {

    sudais su("sudais haidar alam", 18);

    cout << su.get_name() <<endl;
    cout << su.get_age() << endl;

    return 0;

}