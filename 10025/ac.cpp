#include <iostream>
using namespace std;
int main()
{
    int a , b, c ; 
    cin >> a >> b >> c ;
    int n;
    cin >> n;
    for (int i = 0 ; i < n/a ; i ++){
        for (int j = 0 ; j < n/b ; j ++){
            int temp = n - i*a - j*b;
            if (temp < 0){
                continue;
            }
            if (temp % c == 0){
                cout << i << " " << j << " " << temp/c << endl;
            }
        }
    }
    return 0;
}