#include "fun.h"

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
