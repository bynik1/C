#include <stdio.h>

struct Foo{
    char c;
    struct Bar *p;
    short x;
};

struct Foo1{
    struct Bar *p;
    short x;
    char c;
};

struct Bar {
    char c;
    short d;
    int n;
    char i;
};

struct Bar1 {
    int n;
    short d;
    char c;
    char i;
};

typedef struct Baz {
    int i;
    long l;
    char c;
}B;

struct Baz1 {
    long l;
    int i;
    char c;    
};



int main()
{
    struct Foo F;
    struct Bar B;
    struct Baz Z;

    struct Foo1 F1;
    struct Bar1 B1;
    struct Baz1 Z1;

    printf("memory Foo - %zu Bar - %zu Baz - %zu\n", sizeof(struct Foo), sizeof(struct Bar), sizeof(struct Baz));
    printf("Element for Foo: %p, %zu; %p, %zu; %p, %zu\n", &F.c, sizeof(F.c), &F.p, sizeof(F.p), &F.x, sizeof(F.x));
    printf("Element for Bar: %p, %zu; %p, %zu; %p, %zu\n", &B.c, sizeof(B.c), &B.d, sizeof(B.d), &B.n, sizeof(B.n), &B.i, sizeof(B.i));
    printf("Element for Baz: %p, %zu; %p, %zu; %p, %zu\n", &Z.i, sizeof(Z.i), &Z.l, sizeof(Z.l), &Z.c, sizeof(Z.c));

    printf("memory Foo1 - %zu Bar1 - %zu Baz1 - %zu\n", sizeof(struct Foo1), sizeof(struct Bar1), sizeof(struct Baz1));
    printf("Element for Foo: %p, %zu; %p, %zu; %p, %zu\n", &F1.p, sizeof(F1.p), &F1.x, sizeof(F1.x), &F1.c, sizeof(F1.c));
    printf("Element for Bar1: %p, %zu; %p, %zu; %p, %zu\n", &B1.n, sizeof(B1.n), &B1.d, sizeof(B1.d), &B1.c, sizeof(B1.c), &B.i, sizeof(B1.i));
    printf("Element for Baz1: %p, %zu; %p, %zu; %p, %zu\n", &Z1.l, sizeof(Z1.l), &Z1.i, sizeof(Z1.i), &Z1.c, sizeof(Z1.c));

    return 0;
}
