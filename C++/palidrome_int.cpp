#include <iostream>
using namespace std;
int main()
{
    int n, m, a, x;
    cout << "ENTER THE RANGE: ";
    cin >> x;
    for (int i = 11; i <= x; i++)
    {
        n = i;
        a = 0;
        while (n)
        {
            m = n % 10;
            a = (a * 10) + m;
            n /= 10;
        }
        if (a == i)
            cout << i << " IS A PALINDROME\n";
    }
}