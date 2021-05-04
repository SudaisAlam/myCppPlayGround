#include <iostream>
using namespace std;

class DayOfYear
{
public:
    DayOfYear(int new_month, int new_day); //declaring constructor
    DayOfYear(); //default constructor without any parameters
	  int myVar;
    void output( );
    int get_month( );
    int get_day( );
    
private:  
    void check_date( );  
    int month;    
    int day;
};


int main(){
  DayOfYear birthday(11,23); //creating object and calling constructor
  DayOfYear today; //creating object and calling default constructor
  cout << "Birthday day is: " << birthday.get_day()<<endl;
  cout << "Birthday month is: "<< birthday.get_month()<<endl;
  cout << "Today the day is: " << today.get_day()<<endl;
  cout << "Today month is: " << today.get_month()<<endl;
  return 0;
}

//defining constructor
DayOfYear::DayOfYear(int new_month, int new_day){ //class name and constructor name are same
  month = new_month;
  day = new_day;
}

DayOfYear::DayOfYear(){ //defining default constructor
  month = 0;
  day = 0;
}

int DayOfYear::get_month( )
{
    return month;    //retuns the private variable month
}

int DayOfYear::get_day( )
{
    return day;    //returns the private variable day
}