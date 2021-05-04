#include<iostream>
using namespace std;

class human{
    public:

    void Data();
    string name;
    int age;

};

void human::Data(){
        
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }


int main() {

    human Man, Women;

    Man.name = "sudais";
    Man.age = 20;

    Man.Data();

    Women.name ="xyz";
    Women.age = 30;

    Women.Data();
    
    return 0;
    
}