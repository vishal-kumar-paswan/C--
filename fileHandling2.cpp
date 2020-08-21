#include <iostream>
#include <string>

constexpr int maxbuffer=1024;

using namespace std;

int main() {

    const char * filename = "thisismyfile.txt";
    const char * information = "Vishal Kumar Paswan";
    // FILE * fh = fopen(filename, "w");
    // for (int i = 0; i < 50; i++)
    // {
    //     fputs(information, fh);
    // }

    // fclose(fh);

    char buf[maxbuffer];
    FILE * fh = fopen(filename, "r");
    while(fgets(buf, maxbuffer, fh)) {
        fputs(buf, stdout);
    }
    fclose(fh);
    return 0;
}