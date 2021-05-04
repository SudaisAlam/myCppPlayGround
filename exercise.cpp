#include <iostream>
using namespace std;

class Mammal
{
public:
  Mammal(int a) {
    age = a;
  }
  virtual void Eat() {
    cout << "Mammal eats food";
  }
  virtual void Speak() {
    cout << "Mammal speaks mammalian!!";
  }
  virtual int get_Age() {
    return age;
  }
protected:
  int age;
    
};


//define the base class "Dog" here
class Dog : public Mammal{
  public:
    Dog(int a=0) : Mammal(a) {

    }
    void Eat() {
    cout << "Dog eats meat";
  }
  void Speak() {
    cout << "Dog barks: ruff! ruff!";
  }
  int get_Age() {
    return age;
  }
};

//define the base class "Cat" here
class Cat : public Mammal{
  public:
    Cat(int a=0) : Mammal(a) {
        
    }
    void Eat() {
    cout << "Cat eats meat";
  }
  void Speak() {
    cout << "Cat meows: Meow! Meow!";
  }
  int get_Age() {
    return age;
  }
};

int main() {
  //make object of Mammal class
   Dog d;
  //making object of child class Cat
  Cat c;

  Mammal *m1 = &d;
  Mammal *m2 = &c;
  //making object of child class Dog
 
  
  cout << "Calling Dog class functions"<<endl;
  //call Eat and Speak functions here for the Dog object
  m1->Eat();
  m1->Speak();
  
  cout << "Dog's age is: " <<m1->get_Age() <<endl; //cout the age by calling the get_Age() function here
 
  cout << "Calling Cat class functions"<<endl;
  //call Eat and Speak functions here for the Cat object
  m2->Eat();
  m2->Speak();
  cout << "Cat's age is: " <<m2->get_Age() <<endl; //cout the age by calling the get_Age() function here
  
  return 0;
}