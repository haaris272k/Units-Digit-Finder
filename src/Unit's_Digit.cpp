#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int unitdig(int x, int y)
{
    int last, rem, unit_digit;
    last = x % 10;
    rem = y % 4;
    unit_digit = int(pow(last, rem));
    if (y >= 4)
    {
        if (rem == 0)
        {
            if (last == 2 || last == 4 || last == 6 || last == 8)
            {
                cout << "The unit digit of x ^ y is: 6" << endl;
            }
            else
            {
                cout << "The unit digit of x ^ y is: 1 " << endl;
            }
        }
        else
        {
            cout << "The unit digit of x ^ y is " << unit_digit << endl;
        }
    }
    else
    {
        cout << "The exponent must be greater than or equal to 4" << endl;
    }
    return 0;
}
int main()
{
    int x, y, res;
    cout << "Enter the base: " << endl;
    cin >> x;
    cout << "Enter the exponent: " << endl;
    cin >> y;
    res = unitdig(x, y);
    cout << res << endl;
    return 0;
}