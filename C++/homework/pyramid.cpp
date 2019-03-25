#include <iostream>
using namespace std;

void outputPyramid(int n, int k);

int main(void)
{
    int t;
    int n, k;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n >> k;
        outputPyramid(n, k);
    }

    return 0;
}

void outputPyramid(int n, int k)
{
    int step = n - 1;
    for(int i=k; k > 0; k--)
    {
        cout << i;
        i += step;
        step--;
        if(k == 1)
            break;
        cout << '*';
    }
    cout << '\n';
}
