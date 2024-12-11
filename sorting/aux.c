#include "aux.h"

int compareTo(int v, int w)
{
    if(v < w) return -1;
    if(v > w) return +1;
    return 0;
}

int less(int v, int w)
{
    return compareTo(v, w) < 0;
}

void exch(int* a, int i, int j)
{
    int swap = a[i];
    a[i] = a[j];
    a[j] = swap;
}
