#include "fun.h"

Fifo& operator<<(Fifo& f, int const& i){
    f.arr[f.last] = i;
    f.last++;
    return f;
}
Fifo& operator>>(Fifo& f, int& i){
    i = f.arr[f.last];
    if(f.last < 0)
        f.last = 0;
    return f;
}
