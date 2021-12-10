// Factorial using for loop
#include <cstdio>

unsigned long int factorial2(unsigned long int n)
{
    unsigned long int result=1;
    for(n;n>0;--n)result *=n;
    return result;
}

unsigned long int factorial1(unsigned long int n)
{
    unsigned long int result=n;
    while(n>1) result *=--n;
    return result;
}

int main()
{
    for(int i=1;i<10;++i)
    {
        printf("Factorial of %4d is %4d\n",i, factorial1(i));
    }
    return 0;
}