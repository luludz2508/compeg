#include "stdio.h"
void filecopy (char *infilename, char *outfilename);
int main(int argc, char const *argv[]) {
    filecopy("hello.txt", "copy_hello.txt");
    filecopy("rmit.txt", "copy_rmit.txt");
    return 0;
}
void filecopy (char *infilename, char *outfilename) {
    FILE *p = fopen(infilename, "r");
    char s[100];
     fscanf(p, "%[^\0]s", s);
    FILE *o = fopen(outfilename, "a");
     fprintf(o, "%s" , s);
    fclose(p);
    fclose(o);
}
