#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    unsigned char c;
    char ch;
    int input;

    char filename[100];

    int i;
    for (i=1; i < argc; i++) {
       printf("%s", argv[i]);
    }


    if (argc < 4) {
        return 1;
    }

    ch=argv[3][0];
    int i = 0;
    while(ch!='\0' && i<99){
        filename[i] = ch;
        i++;
        ch=argv[3][i];
    }
    filename[i] = '\0';

    srand((unsigned int)time(NULL));

    FILE *fp = fopen(filename, "wb");

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