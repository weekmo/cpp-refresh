#include <cstdio>
#include <cstdint>

int main()
{
    char c=0;
    //short int si = 0;
    short si = 0;
    int i = 0;
    //long int li = 0;
    long li = 0;
    //long long int lli = 0;
    long long lli = 0;

    printf("size of char is %zd bits\n", sizeof(c) * 8);
    printf("size of short in is %zd bits\n", sizeof(si)  * 8);
    printf("size of int is %zd bits\n", sizeof(i)  * 8);
    printf("size of long int is %zd bits\n", sizeof(li)  * 8);
    printf("size of long long int is %zd bits\n", sizeof(lli)  * 8);

    printf("Size of int8_t is %ld\n", sizeof(int8_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(int16_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(int32_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(int64_t) * 8);

    printf("Size of int8_t is %ld\n", sizeof(uint8_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(uint16_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(uint32_t) * 8);
    printf("Size of int8_t is %ld\n", sizeof(uint64_t) * 8);

    return 0;
}