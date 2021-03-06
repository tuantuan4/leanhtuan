#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    bool CheckIsPrime[100000];
    for (int i=2; i<=n; i++) {
        CheckIsPrime[i] = true;
    }
    for (int i=2; i<=n; i++) {
        if (CheckIsPrime [i] == true) {
            for (int j= 2*i; j <=n; j += i) {
                CheckIsPrime[j] = false;
            }
        }
    }
    for (int i=2; i<=n; i++) {
        if (CheckIsPrime[i] == true)
            cout<< i <<" ";
    }
    return 0;
}
