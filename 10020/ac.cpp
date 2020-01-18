#include <iostream>
using namespace std;
int main()
{
    int n ; 
    cin >>n ;
    char word = 'A';
    int index = 0 ;
    for ( ; word <= 'Z' ; ){
        if ( index == n ){
            index = 0 ;
            cout << endl;
            continue;
        }
        cout << word;
        word = word + 1;
        index ++ ;
    }
    cout << endl;
    return 0;
}