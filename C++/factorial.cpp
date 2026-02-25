// Done
#include <iostream>
using namespace std;

int i = 1, n, fac = 1;
int fn(int &i, int &fac, int &n)
{
    if (i > n)
        return fac;
    else
        fac *= i;
    return fn(++i, fac, n);
}
int main()
{
    cout << "ENTER THE NUMBER : ";
    cin >> n;
    fn(i, fac, n);
    cout << "FACTORIAL OF " << n << " : " << fac;
}