#include "fun.h"
#include <iostream>

using namespace std;
int main(void)
{
    int i, j;
    Fifo f = Fifo();
    Triangle t = Triangle();
    Triangle u = Triangle();
    Vector v = Vector();
    cin >> i;
    if (i > 0 && i <= 100){
        for(;i > 0; i--){
            cin >> j;
            operator<<(f , j);
        }
    }
    cin >> t.a.x >> t.a.y >> t.b.x >> t.b.y >> t.c.x >> t.c.y;
    cin >> u.a.x >> u.a.y >> u.b.x >> u.b.y >> u.c.x >> u.c.y;
    cin >> v.x >> v.y;
    cout << operator<(t,u) << endl <<
            operator>(t,u) << endl <<
            operator==(t, u) << endl <<
            operator!=(t, u) << endl;
    t = t + v;
    cout << (t < u) << endl <<
            (t > u) << endl <<
            (t == u) << endl <<
            (t != u) << endl;
    while(f.last != 0){
        f >> j;
        cout << j << endl;
    }
    return 0;
}
