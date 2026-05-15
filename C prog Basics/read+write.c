#include <stdio.h>

int main() {
    FILE *f1, *f2;
    f1 = fopen("read2.txt", "r");
    f2 = fopen("write2.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("File error!\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(f1)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}


