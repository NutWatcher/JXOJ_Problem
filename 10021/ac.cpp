#include <iostream>
using namespace std;
int main()
{
    int n ;
    int a , b, c ; 
    cin >> n ;
    int ta = 0 , tb = 0 , tc = 0  ;
    for (int i = 0 ; i < n ; i ++){
        cin >> a >> b >> c ;
        ta += a ;
        tb += b;
        tc += c;
    }
   
    cout << ta << " " << tb << " " << tc << " " << ta+tb+tc << endl;
    return 0;
}