#include <cstdio>
// Count the number of chars
const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;

    for(;string[count]!=0;++count);
    printf("The number of chars is: %d\n", count);
    
    count = 0;
    while(string[count]){
        ++count;
    }
    printf("The number of chars is: %d\n", count);
    return 0;
}