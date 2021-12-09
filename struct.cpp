#include <cstdio>

struct S
{
    int i;
    double d;
    const char *s;
};

int main()
{
    S s1 = {3, 27.4, "a string"};

    S s2;
    s2.i = 4;
    s2.d = 9.456873;
    s2.s = "hello s2";

    printf("S1: %d, %.2f, %s\n", s1.i, s1.d, s1.s);
    printf("S2: %d, %.3f, %s\n", s2.i, s2.d, s2.s);

    S *s3 = &s1;

    printf("S3 %s\n", s3->s);
    
    return 0;
}