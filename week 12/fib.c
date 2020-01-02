#include "stdio.h"
void filecopy (char *infilename, char *outfilename);
int main(int argc, char *argv[]) {
    filecopy(argv[1], argv[2]);

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
