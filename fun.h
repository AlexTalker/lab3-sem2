#ifndef FUN_H
#define FUN_H
typedef struct Fifo {
    int arr[100];
    int last;
};
Fifo& operator<<(Fifo&, int const&);
Fifo& operator>>(Fifo const&, int&);
#endif // FUN_H
