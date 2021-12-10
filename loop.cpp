#include <cstdio>

int main(){
    char s[] = "String";

    // (init; condition 0 = false; increament)
    for(char * cp=s; *cp; ++cp){
        printf("char is %c\n", *cp);
    }

    // Doesn't work for c
    for(char ch: s){
        if(ch) break;
        printf("char is %c\n", ch);
    }

    for(int i = 0; i<5; i++)
    {
        printf("pointer -> %p, value -> %d\n", &i, i);
    }

    for(int i = 0; i<5; ++i)
    {
        printf("pointer -> %p, value -> %d\n", &i, i);
    }
    return 0;
}