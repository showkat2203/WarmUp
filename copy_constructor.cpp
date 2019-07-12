#include<bits/stdc++.h>

using namespace std ;

//If the class has pointer variables and has some dynamic memory allocations, then it is a must to have a copy constructor.

class Line
{
public:
    int getL();
    Line() ;
    Line(int l);    // normal constructor
    Line(const Line &x); // copy constructor
    ~Line() ;

private:
    int *ptr ;
};

int Line::getL()
{
    return *ptr ;
};


// simple constructor
Line::Line()
{
    ptr = new int ;
    *ptr = 11;
}
// simple constructor
Line::Line(int l)
{
    ptr = new int;
    *ptr = l ;
}

// copy constructor
Line::Line(const Line &x)
{
    ptr = new int;
    *ptr = *x.ptr ;
}

Line::~Line()
{
    delete ptr ;
}

void show(Line x)
{
    cout << "Object value " << x.getL() << endl ;
}

int main()
{
    Line line(10) ;

    show(line) ;

    Line x(26);
    show(x) ;

    line = x ;
    show(line) ;

    x = line ;
    show(x) ;

    return 0 ;
}
