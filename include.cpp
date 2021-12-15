#include <iostream>
#include "weekmoLib.hpp"
using namespace std;

template <typename T>
T maxof(const T &a, const T &b){
    return (a > b ? a : b);
}

int main(){
    
    cout << "Max is: " << maxof<int>(30, 20) << endl;

    printf("Function from weekmoLib %s\n", u8_to_bstr(50));
    return 0;
}