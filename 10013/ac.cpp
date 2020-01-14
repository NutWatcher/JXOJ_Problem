#include <iostream>
using namespace std;
int main()
{
    int num = 0 ; 
    cin >> num ;
    if ( num == 0 ){
        cout << "zero" << endl;
    }
    else if ( num > 0 ){
        cout << "positive" << endl;
    }
    else {
        cout << "negative" << endl;
    }
    return 0;
}