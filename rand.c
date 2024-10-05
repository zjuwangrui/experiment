#include <stdio.h>
#include <math.h>
#include <time.h>

#define GenUIID(N) ( ((__LINE__ << 16) | (N & 0xFFFF)) ^ ((long) & __FILE__) )

int main()
{
    int i, id;
    
    for (i = 0; i < 10; i++) {
        id = GenUIID(rand());
    }
    
    return 0;
}