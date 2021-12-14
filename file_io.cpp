#include <cstdio>

constexpr int maxstring = 1024;
constexpr int repeat = 5;

int main(){
    const char * fn = "testfile.txt";
    const char * str = "This is a literal c-string.\n";

    // Write a file
    puts("writing file");
    FILE * fw = fopen(fn, "wb");
    for(int i=0; i< repeat; i++){
        fputs(str, fw);
    }
    fclose(fw);
    puts("Done!");

    // Read the file
    puts("reading file");
    char buf[maxstring];
    FILE * fr = fopen(fn, "rb");
    while (fgets(buf,maxstring,fr))
    {
        fputs(buf, stdout);
    }
    
    fclose(fr);
    remove(fn);

    puts("Done!");
    
    return 0;
}