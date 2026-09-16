#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    unsigned char c;
    int input;

    srand((unsigned int)time(NULL));

    FILE *fp = fopen("./chave.out", "wb");

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