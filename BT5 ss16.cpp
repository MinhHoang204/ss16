#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    FILE *fptr1, *fptr2;

    fptr1 = fopen("bt01.txt", "r");
    fptr2 = fopen("bt03.txt", "r");

    if (fptr1 == NULL || fptr2 == NULL) {
        printf("Khong the mo file.\n");
        exit(1);
    }

    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("bt01.txt", "r");
    fptr2 = fopen("bt03.txt", "r");

    if (fptr1 == NULL || fptr2 == NULL) {
        printf("Khong the mo file.\n");
        exit(1);
    }

    FILE *fptr3 = fopen("bt5.txt", "w");

    while ((c = fgetc(fptr1)) != EOF) {
        fputc(c, fptr3);
    }

    while ((c = fgetc(fptr2)) != EOF) {
        fputc(c, fptr3);
    }

    printf("Ða sao chep noi dung tu 2 file bt01 va bt03 sang file bt5.txt.\n");

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}
