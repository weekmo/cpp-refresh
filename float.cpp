#include <cstdio>

const size_t byte = 8;

int main()
{
    float f;
    double df;
    long double ldf;

    printf("size of float is %zd bits\n", sizeof(f) * byte);
    printf("size of double is %zd bits\n", sizeof(df) * byte);
    printf("size of long double is %zd bits\n", sizeof(ldf) * byte);

    f = 5e2;
    printf("f is %.2f\n\u03bc", f);
}