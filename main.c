#include <stdio.h>

int main() {
    int* pc, *pd, c, d;
    c=5;
    d=500*2;
    pc = &c;
    pd=&d;
    printf("%d\n", *pc);

    printf("%d\n", *pd);

    pc = &d;

printf("%d", *pc*2);

}