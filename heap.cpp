#include<bits/stdc++.h>

using namespace std ;

int node, a[1010] ;

int delete_top()
{
    int lft, rgt, cur = 0 ;

    if( node == 0 )
    {
        return -1000000;
    }
    int deleted = a[0] ;

    a[cur] = a[node - 1] ;
    node-- ;

    while(cur * 2 < node )
    {
        lft = (cur * 2 + 1) ;
        rgt = (cur * 2 + 2) ;
        if( rgt < node && a[cur] > a[rgt] )
        {
            cur = rgt ;
            swap(a[cur], a[rgt]) ;
        }
        else if( lft < node && a[cur] > a[lft] )
        {
            cur = lft ;
            swap(a[cur], a[rgt]) ;
        }
        else
            break ;
    }

    return deleted ;
}

void insert_at_heap(int val)
{
    int par, pos = node;

    a[pos] = val ;

    while(pos >= 0 )
    {
        par = (pos - 1) / 2 ;

        if(a[pos] < a[par])
            swap(a[pos], a[par]) ;
        pos--;
    }
    node++ ;
}

void show_heap()
{
    cout << "show heap  " << endl;
    for(int i = 0; i < node; i++ )
        cout << a[i] << " " ;

    cout << endl <<"Heap end" << endl ;
}

int main()
{
    int tst, tot_operations, opt_num, val ;
    tst = (rand() % 10) + 1;

    while(tst--)
    {
        tot_operations = (rand() % 20) + 20 ;

        node = 0 ;

        while(tot_operations--)
        {
            opt_num = (rand() % 2) + 1 ;
            if(opt_num == 1 )
            {
                val = (rand() % 100) + 1 ;
                insert_at_heap(val) ;
                cout << "insert " << val << endl ;
            }
            else if( opt_num == 2 )
            {
                cout << "deleted " << delete_top() << endl ;
            }
            show_heap() ;

        }
        cout << endl ;

    }
    return 0;
}
