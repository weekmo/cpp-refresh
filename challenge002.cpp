// Prime numbers
#include <cstdio>


int main()
{
    bool flage = false;
    for(int i = 1; i<100; ++i){
        if(i%2==0) continue;
        flage = true;
        for(int j = i-1; j > 1; --j)
        {
            if(i%j ==0){
                flage = false;
                break;
            }
            //printf("i: %d, j: %d prime\n", i, j);
        }
        if(flage) printf("i: %d prime\n", i);
    }
    return 0;
}