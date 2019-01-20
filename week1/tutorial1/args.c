#include <stdio.h>

int main(int argc, char * argv[]) {
    int i;
    for(i = 0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }

    #ifdef DEBUG
    printf("This is a debug code!\n");
    #endif

    return 0;
}
