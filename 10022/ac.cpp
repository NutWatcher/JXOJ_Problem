#include <iostream>
using namespace std;
int main()
{
    int n , x ; 
    cin >> n >> x ;
    int res = 0 ;
    for (int i = 1 ; i <= n ; i ++){
        int temp = i ;
        for (;;){
            if (temp % 10 == x){
                res ++ ;
            }
            temp /= 10 ;
            if (temp == 0 ){
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}