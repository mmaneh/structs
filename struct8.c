#include <stdio.h>
union something {
    int a;
    float b;
    char c;
};

int main() {
    union something smth;

    smth.a = 5;
    smth.b = 7.5;
    smth.c = 'h';
    printf("int %d\n", smth.a);
    printf("float  %f\n", smth.b);
    printf("char %c\n", smth.c);

    printf("The size %d", sizeof(smth));

}