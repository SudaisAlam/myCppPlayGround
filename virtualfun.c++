#include<iostream>
using namespace std;

class Ally{
    protected:
        int heal;
        string weapon;

    public:
        void setmed(int a) {
            heal = a;
        }
        void setweapon(string b) {
            weapon = b;
        }
        virtual void med() {
        }
        virtual void weaponn() {
        }

};
class Alpha : public Ally{
    public:
        void med() {
            cout << "Alpha gives Health:  +" <<heal <<endl;
        }
        void weaponn() {
            cout << "Alpha gives: +" <<weapon <<endl;
        }
};
class bravo : public Ally{
    public:
        void med() {
            cout << "bravo gives Health:  +" <<heal <<endl;
        }
        void weaponn() {
            cout << "Bravo gives: +" <<weapon <<endl;
        }
};

int main() {
    Alpha sadeed;
    bravo ibsam;
    Ally *team = &sadeed;
    Ally *backup = &ibsam;

    team->setmed(40);
    team->setweapon("M416");
    backup->setmed(50);
    backup->setweapon("Desert eagle");

    team->med();
    team->weaponn();
    backup->med();
    backup->weaponn();

    return 0;
}