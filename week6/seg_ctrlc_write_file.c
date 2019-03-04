#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

#define LOOP_LIMIT 10000

FILE *outFile = NULL;

void signal_handler(int signal) {
    printf("Signal %d is caught\n", signal);
    if(outFile) {
        fclose(outFile);
    }
    exit(signal);
}

void ignored_signal_handler(int signal) {
    printf("THIS SHOULD NOT BE PRINTED\n");
}

int main(int argc, char **argv) {
    char *fileName = "out.txt"; 
    int *numPtr = NULL;

    if(argc == 2) {
        fileName = argv[1];
    }

    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);
    signal(SIGSEGV, ignored_signal_handler); //Will be overwritten by the next line;
    signal(SIGSEGV, signal_handler);

    outFile = fopen(fileName, "w");

    for(int i=0; i<LOOP_LIMIT; i++) {
        fprintf(outFile, "%d\n", i);
    }

    scanf("%d", numPtr);
    
    fclose(outFile);
    return 0;
}
