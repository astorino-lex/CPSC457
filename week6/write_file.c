#include <stdio.h>
#include <unistd.h>

#define LOOP_LIMIT 10000

FILE *outFile = NULL;

int main(int argc, char **argv) {
    char *fileName = "out.txt"; 
    if(argc == 2) {
        fileName = argv[1];
    }

    outFile = fopen(fileName, "w");

    for(int i=0; i<LOOP_LIMIT; i++) {
        fprintf(outFile, "%d\n", i);
    }

    //If we press Ctrl+C instead of entering integer, 
    //The file will not contain all the numbers, because of internal I/O buffer
    int num;
    scanf("%d", &num);

    fclose(outFile);
    return 0;
}
