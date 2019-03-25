#include <iostream>
using namespace std;

int angleClock(int h, int m);

int main(void)
{
    int t;
    int h, m;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> h >> m;
        cout << angleClock(h, m) << endl;
    }

    return 0;
}

int angleClock(int h, int m)
{
    int pivot_minute = h * 5;
    double hour_minute_angle = 0.5 * m;
    int minute_angle;
    double angle = 0;

    minute_angle = (pivot_minute - m) > 0 ? (pivot_minute - m) * 6 : (m - pivot_minute) * 6;

    if (pivot_minute >= m)
        angle = minute_angle + hour_minute_angle;

    else
        angle = minute_angle - hour_minute_angle;

    //cout << angle << endl;

    return 360 - angle < 180 ? 360 - angle : angle;
}
