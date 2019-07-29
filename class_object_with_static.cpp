#include<bits/stdc++.h>

using namespace std ;

class Car
{
    int x ;
public:
    Car()
    {
        x = 0 ;
        cout << "Constructor initialize" << endl ;
    }
    ~Car()
    {
        cout << "Destroying object" << endl ;
    }
};


int main()
{
    int a = 0 ;
    if( a == 0 )
    {
        static Car one;
    }
    cout << "End of Main" << endl ;
    return 0;
}
