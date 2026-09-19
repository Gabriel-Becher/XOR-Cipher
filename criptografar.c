#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    unsigned char c;
    int input;

    if (argc != 2) {
        return 1;
    }

    srand((unsigned int)time(NULL));

    FILE *fp = fopen(argv[1], "wb");

    if (fp == NULL) {
        return 1;
    }

    while ((input = fgetc(stdin)) != EOF) {
        c = (unsigned char)(rand() % 256);

        fputc((unsigned char)input ^ c, stdout);
        fputc(c, fp);
    }

    fclose(fp);

    return 0;
}