#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }

    while (1) {
        sleep(1);
        printf("%s\n", argv[1]);
    }

    return 0;
}
