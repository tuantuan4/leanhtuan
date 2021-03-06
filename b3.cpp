#include <iostream>
#include <cmath>
using namespace std;

int phandu (int a, int n, int m)
{
    if ( n==0) return 1%m;
    int result = 1;
    for (int i=1; i<=n; i++) {
        result = result* (a % m) %m;
    }
    return result;
}
int main ()
{
    int a, n, m;
    cin >> a >> n >> m;
    cout << phandu (a, n, m);
    return 0;
}
