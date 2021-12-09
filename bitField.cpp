#include <cstdio>

struct  Prefs 
{
    bool linkesMusik : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;

    bool linkesMusik1 : 1;
    bool hasHair1 : 1;
    bool hasInternet1 : 1;
    bool hasDinosaur1 : 1;

    bool linkesMusik2 : 1;
};


int main()
{
    Prefs homer;

    printf("Size of Pref is %zd bits\n", sizeof(homer) * 8);

    return 0;
}