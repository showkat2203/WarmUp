#include<bits/stdc++.h>

using namespace std ;


class Line
{
public:
    void setL(double L);
    double getL();
    Line(double l);

    double getW() ;

    ~Line() ;

private:
    double len;
    double w ;
};

void Line::setL(double l)
{
    len = l ;
}

double Line::getL()
{
    return len ;
}

Line::Line(double l): w(l), len(l)
{
    cout << "Width " << w << endl ;
}

Line::~Line()
{
    cout << "Destroy objects" << endl ;
}

int main()
{

    Line line = Line(15) ;

    cout << line.getL() << endl ;

    return 0;
}
