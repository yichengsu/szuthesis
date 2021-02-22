#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid;

    switch ((pid = fork())) {
    case -1:
        printf("fork failed\n");
        break;
    case 0:
        /* child calls exec */
        execl("/bin/ls", "ls", "-l", (char *)0);
        printf("execl failed\n");
        break;
    default:
        /* parent uses wait to suspend execution until child finishes */
        wait((int *)0);
        printf("is completed\n");
        break;
    }

    return 0;
}