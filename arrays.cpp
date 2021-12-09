#include <cstdio>

int main(){
    int array[] = {1, 2, 3, 4, 5 };
    for(int i: array){
        printf("%d ", i);
    }

    *array = 11;
    int *index = array;
    *(++index) = 22;

    for(int i: array){
        printf("%d ", i);
    }
    return 0;
}