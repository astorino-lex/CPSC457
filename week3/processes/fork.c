#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t childPID;

    childPID = fork();
    if(childPID >= 0) { //Fork is successful
        if(childPID == 0) {
            //Child process block
        } else {
            //Parent process block
        }
    } else{
        //Fork failed
        return 1;
    }

    return 0;
}
