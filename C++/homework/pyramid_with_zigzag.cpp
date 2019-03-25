#include <iostream>
using namespace std;

void outputZigZag(int n, int k);

int main(void)
{
    int t;
    int n, k;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n >> k;
        outputZigZag(n, k);
    }

    return 0;
}

void outputZigZag(int n, int k)
{
    int pivot = 0;

    for(int i=1; i<=k; i++)
        pivot += i;

    if(k % 2 == 0) {
        for (int i = pivot; k > 0; i--) {
            cout << i;
            if (k == 1)
                break;
            cout << "*";
            k--;
        }
        cout << '\n';
    }


    else {
        for (int i = pivot - k + 1; k > 0; i++) {
            cout << i;
            if (k == 1)
                break;
            cout << "*";
            k--;
        }
        cout << '\n';
    }
}
