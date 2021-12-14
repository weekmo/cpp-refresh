// Factorial using for loop
#include <cstdio>

struct SKU
{
    int id;
    char  *name;
    char *desc;
};

const char *fn = "items.txt";
const int bufsize = 1024;

int main()
{
    SKU skus[4];
    char buf[bufsize];
    FILE * fr = fopen(fn,"r");
    while (fgets(buf, bufsize, fr))
    {
        SKU sku;
        
    }
    


    return 0;
}