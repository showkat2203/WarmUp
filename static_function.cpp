#include<bits/stdc++.h>

using namespace std ;

class A
{
public:
    static int sum(int i);

};

int A::sum(int i)
{
    return i + 2 ;
}

int main()
{
    cout << A::sum(6) << endl ;
    cout << A::sum(10) << endl ;

    return 0 ;
}
