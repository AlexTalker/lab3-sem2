#include "fun.h"
#include <cmath>

Triangle& operator+(Triangle& t, Vector& v){
    t.a.x += v.x;
    t.a.y += v.y;
    t.b.x += v.x;
    t.b.y += v.y;
    t.c.x += v.x;
    t.c.y += v.y;
    return t;
}
bool operator<(Triangle& a, Triangle& b){
    return (square(a) < square(b));
}
bool operator>(Triangle& a, Triangle& b){
    return (square(a) > square(b));
}
bool operator==(Triangle& a, Triangle& b){
    return (square(a) == square(b));
}
bool operator!=(Triangle& a, Triangle& b){
    return (square(a) != square(b));
}

double square(Triangle t){
    return std::abs((t.b.x - t.a.x) * (t.c.y - t.a.y) - (t.c.x - t.a.x)*(t.b.y- t.a.y))/2.0;
}
Fifo& operator<<(Fifo& f, int& i){
    f.arr[f.last] = i;
    f.last++;
    return f;
}
Fifo& operator>>(Fifo& f, int& i){
    i = f.arr[0];
    for(int j = 0;j < f.last;j++)
        f.arr[j] = f.arr[j+1];
    f.last--;
    return f;
}
