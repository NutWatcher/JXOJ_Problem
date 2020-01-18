#include <iostream>
using namespace std;
int main()
{
    int n ; 
    cin >> n;
    for (int i = 3 ; i < n ; i += 2){
        int flag = 1 ;
        for (int j = 2 ; j < i ; j ++){
            if (i%j == 0){
                flag = 0 ;
                break;
            }
        }
        if (flag == 0){
            continue;
        }
        int temp = n-i;
        for (int j = 2 ; j < temp ; j ++){
            if (temp%j ==0){
                flag = 0 ;
                break;
            }
        }
        if (flag == 1){
            cout << i << " " << n-i << endl;
            break;
        }
    }
    return 0;
}