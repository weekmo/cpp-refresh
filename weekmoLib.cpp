#include <cstdint> 
#include <cstdio>
//#include "weekmoLib.hpp"
const char *u8_to_bstr(const uint8_t & u8)
{
    static char s[9];
    s[8] = 0;
    char *sp = s;
    for(uint8_t xbit = 0b10000000; xbit > 0; xbit >>=1){
        *(sp++) = ((u8 & xbit) == xbit) ? '1' : '0';
    }
    return s;
}

int main(){
    const int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,53,59,61,67,71,73,79,83,89,97};
    //u8_to_bstr(x);
    for(int i : prime)
    {
        printf("%2d in binary -> 0b%s\n",i,u8_to_bstr(i));
    }
    
    return 0;
}