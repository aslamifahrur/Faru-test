#include <stdio.h>

int main() {
    int x, y;
    x = 100;
    y = 100;
    x = y;
    printf("x=%d\n", x);  
    printf("y=%d\n", y);  
    return 0;
}