#include <iostream>
using namespace std;
int main()
{
    int n ; 
    cin >> n ;
    int sum = 0 ;
    for ( ; ; ){
        if (n == 0){
            break;
        }
        sum += n%10 ;
        n /= 10 ;
    }
    cout << sum << endl;
    return 0;
}