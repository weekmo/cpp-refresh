//__cplusplus
#include <cstdio>

int main()
{
    //printf("C++ version is %d\n", __cplusplus);
    int x =7;
    int y = 42;
    int *ip = &x;
    const int &k = x;

    printf("The vakue of x is %d\n", x);
    printf("The vakue of y is %d\n", y);
    printf("The vakue of *ip is %d\n", *ip);
    printf("The vakue of k is %d\n", k);
    x = 62;
    printf("The vakue of k is %d\n", k);
    //k = 72;
    printf("The vakue of x is %d\n", x);

    printf("The vakue of &x is %p\n", &x);
    printf("The vakue of &k is %p\n", &k);
    printf("The vakue of ip is %p\n", ip);
    return 0;
}