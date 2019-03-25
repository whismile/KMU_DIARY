#include <iostream>
using namespace std;

int closesNumber(int n, int m);

int main(void)
{
    int t;
    int n, m;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        cout << closesNumber(n, m) << endl;
    }

    return 0;
}

int closesNumber(int n, int m)
{
    int sign;
    int temp = n - m >= 0 ? n - m : -(n - m);
    int curr;
    int i = m;
    int step = m >= 0 ? m : -m;

    // select direction
    if(n < m)
        sign = -1;

    else
        sign = 1;

    while(true)
    {
        i += sign * step;
        curr = n - i >= 0 ? n - i : -(n - i);

        //cout << i << endl;
        if(curr > temp)
        {
            i += -sign * step;
            break;
        }

        else if(curr == temp)
            break;

        else
            temp = curr;
    }
    return i;
}
