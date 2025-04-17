#include <stdio.h>
union something {
    int a;
    float b;
};

int main() {
    union something smth;

    smth.a = 5;
    printf("int before%d", smth.a);

    smth.b = 7.5;
    printf("float before %f", smth.b);

    printf("int after %d", smth.a);

    printf("The size %d", sizeof(smth));

}