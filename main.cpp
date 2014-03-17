#include "fun.h"
#include <iostream>

using namespace std;
int main(void)
{
    int b;
    Fifo a;
    cin >> b;
    a<<b;
    cout << b << endl;
    a>>b;
    cout << endl << b << endl;
    return 0;
}
