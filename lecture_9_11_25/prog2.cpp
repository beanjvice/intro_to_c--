//increment and decrement 

#include <iostream>
using namespace std;
int main()
{
    int m = 65, n;
    n = m++; // n = m, m = m + 1
    // --n;
    cout << "m = " << m << ", n = " << n << endl;
    cout << "m++ = " << m++ << endl;
    cout << "m = " << m << endl;
    // --m;
    // n++;
    m = 65, n;
    n = ++m; // m = m + 1 , n = m
    cout << "m = " << m << ", n = " << n << endl;
    cout << "++m = " << ++m << endl;
    cout << "m = " << m << endl;
    return 0;
}