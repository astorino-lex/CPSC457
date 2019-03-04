#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define LOOP_LIMIT 10000

int volatile counter = 0;

void signal_handler(int signal) {
    counter++;
    printf("\n%d sec.\n", counter);
    alarm(1);
}

int main(int argc, char **argv) {
    signal(SIGALRM, signal_handler);
    srand(time(NULL));
    int num = rand() % 10;
    int guess = -1;

    alarm(1);
    while(guess != num) {
        printf("Make a guess");
        scanf("%d", &guess);
        if(guess < num) {
            printf("UP!\n");
        } else if (guess > num) {
            printf("DOWN\n");
        }
    }

    printf("Congratulations!\n");
    return 0;
}
