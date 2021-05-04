#include<iostream>

using namespace std;

class enemy{

    protected:
        int attackpower;

    public:
        void setattackpower(int a) {

            attackpower = a;
        
        }

};

class ninja : public enemy{

    public:
        void attack() {
            
            cout << "I am ninja! Ninja slice! -" <<attackpower <<endl;

        }
};

class hitman : public enemy{

    public:
        void attack() {

            cout << "HEAD SHOT! -" <<attackpower <<endl;

        }
};

int main() {

    ninja n;
    hitman h;
    enemy *enemy1 = &n;
    enemy *enemy2 = &h;

    enemy1->setattackpower(20);
    enemy2->setattackpower(50);

    n.attack();
    h.attack();

    return 0;


}