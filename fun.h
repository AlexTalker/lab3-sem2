#ifndef FUN_H
#define FUN_H
struct Fifo {
    int arr[100];
    int last;
};
Fifo& operator<<(Fifo&, int const&);
Fifo& operator>>(Fifo&, int&);
#endif // FUN_H
