#ifndef FUN_H
#define FUN_H
struct Point {
    double x;
    double y;
};
typedef Point Vector;
struct Triangle {
    Point a;
    Point b;
    Point c;
};
struct Fifo {
    int arr[100];
    int last;
};
Fifo& operator<<(Fifo&, int&);
Fifo& operator>>(Fifo&, int&);
double square(Triangle t);
Triangle& operator+(Triangle&, Vector&);
bool operator<(Triangle&, Triangle&);
bool operator>(Triangle&, Triangle&);
bool operator==(Triangle&, Triangle&);
bool operator!=(Triangle&, Triangle&);
#endif // FUN_H
