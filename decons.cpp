#include <iostream>

using namespace std;

class Father {

    public:
        Father() {
            
            cout << "I am the Father constructor!" << endl;

        }
        ~Father() {

            cout << "I am the Father deconstructor!" << endl;

        }

};

class son : public Father {

    public:
        son() {

            cout << "I am the son constructor!" << endl;

        }
        ~son() {

            cout << "I am the son deconstructor!" <<endl;

        }
};

int main() {

    son Ali;

    return 0;

}