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

int main(int argc, char **argv) {
    char *fileName = "out.txt"; 
    if(argc == 2) {
        fileName = argv[1];
    }

    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);
    //Add SIGKILL and observe the behavior
    //signal(SIGKILL, signal_handler);
    outFile = fopen(fileName, "w");

    for(int i=0; i<LOOP_LIMIT; i++) {
        fprintf(outFile, "%d\n", i);
    }

    int num;
    scanf("%d", &num);

    fclose(outFile);
    return 0;
}
