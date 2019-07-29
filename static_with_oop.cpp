/*
We can define class members static using static keyword.
When we declare a member of a class as static it means
no matter how many objects of the class are created,
there is only one copy of the static member.

A static member is shared by all objects of the class.
All static data is initialized to zero when the first
object is created, if no other initialization is present.
We can't put it in the class definition but it can be
initialized outside the class as done in the following
example by redeclaring the static variable, using the
scope resolution operator :: to identify which class it
belongs to.
Let us try the following example to understand the concept
of static data members −

Static Function Members
By declaring a function member as static, you make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.

A static member function can only access static data member, other static member functions and any other functions from outside the class.

Static member functions have a class scope and they do not have access to the this pointer of the class. You could use a static member function to determine whether some objects of the class have been created or not.

Let us try the following example to understand the concept of static function members −

*/


#include<bits/stdc++.h>

using namespace std ;

class Car
{
public:
    static int total_car ;
    int speed, weight ;
    Car(int s, int w)
    {
        speed = s, weight = w ;
        total_car++ ;
    }
    static int getTotalCar()
    {
        return total_car ;
    }

    //not allowed
//    static int totalSpeedAndWeight()
//    {
//        return this->speed + this->weight ;
//    }

    int totalSpeedAndWeight()
    {
        return this->speed + this->weight ;
    }

    void set_seat(int s)
    {
        seats = s ;
    }

private:
    int seats ;

};

int Car::total_car = 0 ;

int main()
{
    Car car_one(200, 1000) ;
    cout << "Total speed and weight "<< car_one.totalSpeedAndWeight() << endl ;

    Car car_two(150, 105) ;
    cout << "Total speed and weight "<< car_two.totalSpeedAndWeight() << endl ;

    cout << "Total Car: " << Car::total_car << endl ;
    cout << "Total Car by Function: " << Car::getTotalCar() << endl ;

    // not allowed
//    cout << "Total speed and weight "<< Car::totalSpeedAndWeight() << endl ;
    return 0 ;
}
