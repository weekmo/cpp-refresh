#include <cstdio>

int main(){
    char s1[] = "String";
    char s2[] = {'S', 't', 'r', 'i', 'n', 'g', 0};

    for(int i=0; s1[i] != 0; ++i){
        printf("char is %c\n", s1[i]);
    }

    for(char *ch = s1; *ch !=0; ++ch){
        printf("char value is %c\n", *ch);
    }
    return 0;
}