#include<bits/stdc++.h>


using namespace std ;


class Line
{
public:
    double length ;
    void setLen(double len);
    double getLen();

    void setW(double w);
    double getWidth();

private:
    double width ;

protected:
    double depth;
};

class SmallLine:Line
{
public:
    void setD(double d);
    double getD() ;
};

void SmallLine::setD(double d)
{
    depth = d ;
}

double SmallLine::getD()
{
    return depth ;
}

void Line::setLen(double l)
{
    length = l ;
}

double Line::getLen()
{
    return length ;
}

void Line::setW(double w)
{
    width = w ;
}

double Line::getWidth()
{
    return width ;
}

int main()
{
    Line line ;

    line.setLen(10.0) ;
    cout << line.getLen() << endl ;

    line.length = 11.0;
    cout << line.getLen() << endl;

    line.setW(25.0) ;
    cout << line.getWidth() << endl ;

    SmallLine sLine ;

    sLine.setD(2505.0) ;

    cout << sLine.getD() << endl ;

    return 0 ;
}
