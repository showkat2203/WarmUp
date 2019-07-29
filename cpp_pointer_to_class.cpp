/*A pointer to a C++ class is done exactly the same way as a pointer to a
structure and to access members of a pointer to a class you use the member access
operator -> operator, just as you do with pointers to structures. Also as with all
pointers, you must initialize the pointer before using it.

Let us try the following example to understand the concept of pointer to a class −
*/


#include<bits/stdc++.h>


using namespace std ;

class Box
{
public:
    Box(double l, double b, double h)
    {
        length = l ;
        base = b ;
        height = h ;

    }
    double volume()
    {
        return length * base * height ;
    }

private:
    double length, base, height ;

};

int main()
{
    Box b1(5.0, 3.0, 1.0) ;
    Box b2(6.0, 4.0, 2.0) ;

    Box *ptrBox ;

    ptrBox = &b1 ;

    cout << "First box volume " << ptrBox->volume() << endl ;

    ptrBox = &b2 ;

    cout << "Second box volume " << ptrBox->volume() << endl ;



    return 0 ;
}
