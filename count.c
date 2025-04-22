#include <stdio.h>
int foo (int a) {
    static int count;
    count++;
    printf("called %d\n", count);
}
int main() {
    const int num = 356;
    foo(num);
    foo(num);
    foo(num);
    foo(num);
    foo(num);
    foo(num);
}
