#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    char *ls_args[] = {"ls", "-l", NULL};
    pid_t child_pid;

    child_pid = fork();
    if(child_pid == 0) {
        /* This is done by the child process. */
        execvp(ls_args[0], ls_args);
    
        /* If execv returns, it must have failed. */
        printf("Unknown command\n"); /*This should be printed*/
        exit(1);
    }
    else {
        /* This is run by the parent.  Wait for the child to terminate. */
        wait(NULL);
        return 0;
    }
}
