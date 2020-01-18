#include <iostream>
using namespace std;
int main()
{
    int n , m, y, x ; 
    cin >> n >> m >> y >> x ;
    int cost = 0 ;
    int i = 0 ;
    for ( ; i <= m ; i ++){
        cost = cost + y;
        if ( cost > n ){
            cout << i << endl;
            break;
        }
        y = y + x ;
    }
    if ( i > m ){
        cout << m << endl;
    }
    return 0;
}