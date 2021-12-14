#include <cstdio>

int main()
{
    const int bufsize = 256;
    static char buf[bufsize];
    fputs("Prompt: ", stdout);
    fgets(buf, bufsize, stdin);
    puts("Output: ");
    fputs(buf, stdout);
    fflush(stdout);

    return 0;
}