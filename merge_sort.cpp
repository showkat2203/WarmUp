#include<bits/stdc++.h>


using namespace std ;

void swap_ab(int &a, int &b)
{
    int tmp = a ;
    a = b ;
    b = tmp ;
}

void merge_array(int a[], int low, int mid, int high)
{
    int fst_n = (mid - low) + 1 ;
    int scnd_n = ( high - mid) ;

    int tmp_left[fst_n], tmp_right[scnd_n] ;

    for(int i = 0; i < fst_n; i++ )
        tmp_left[i] = a[i + low] ;

    for(int i = 0; i < fst_n; i++ )
        tmp_right[i] = a[i + ( mid + 1 )] ;

    int i = 0, j = 0, k = low;

    while(i < fst_n && j < scnd_n)
    {
        if( tmp_left[i] <= tmp_right[j] )
            a[k++] = tmp_left[i++] ;
        else
            a[k++] = tmp_right[j++] ;
    }

    while(i < fst_n)
        a[k++] = tmp_left[i++] ;

    while(j < fst_n)
        a[k++] = tmp_right[j++] ;

    return ;

}

void merge_sort(int a[], int low, int high)
{
    if( low < high )
    {
        int mid = low + (high - low) / 2 ;
        merge_sort(a, low, mid) ;
        merge_sort(a, mid + 1, high) ;

        merge_array(a, low, mid, high) ;
    }
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int n, a[10001] ;

    for(int i = 1; i <= 10; i++ )
    {
        n = ( rand() % 40 ) + 1 ;
        for(int j = 0; j < n; j++ )
        {
            int x = rand() % 100;
            if( !(j % 15) )
                x *= -1 ;
            a[j] = x;
        }

        cout << "Unsorted:  " ;
        for(int i = 0; i < n; i++ )
            cout << a[i] << " " ;
        cout << endl ;

        merge_sort(a, 0, n - 1) ;
        cout << "sorted  :  " ;
        for(int i = 0; i < n; i++ )
            cout << a[i] << " " ;
        cout << "\n" << endl ;

    }


    return 0 ;
}
