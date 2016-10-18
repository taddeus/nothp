#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/prctl.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s FILE [ARG...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    prctl(PR_SET_THP_DISABLE, 1, 0, 0, 0);
    execvp(argv[1], &argv[1]);
    return EXIT_FAILURE;
}
