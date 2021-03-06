#include <iostream>
#include <cmath>
using namespace std;
void nhapmang ( int *a, int *b, int n)
{
    for ( int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }
}
bool Test ( int *a, int *b, int n )
{
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if ( a[i] == a[j] || b[i]== b[j] || abs( a[i] - a[j]) == b[i]- b[j] )
                return true;

        }
    }
    return false;
}
int main ()
{
    int n;
    cin >> n;
    int *array1 = new int [n];
    int *array2 = new int [n];
    nhapmang ( array1, array2, n);
    if ( Test (array1, array2, n)== true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
