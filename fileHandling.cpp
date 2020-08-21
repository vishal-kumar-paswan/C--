#include <iostream>
#include <string>

using namespace std;

int main()
{

    static const char *originalFile = "originalfile.txt";
    static const char *editedFile = "editedfile.txt";

    rename(originalFile, editedFile);
    // FILE * fh = fopen(originalFile, "w"); // Opening file in write mode
    // fclose(fh); // Closing file
    remove(editedFile);

    return 0;
}