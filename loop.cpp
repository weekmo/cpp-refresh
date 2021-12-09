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
    return 0;
}