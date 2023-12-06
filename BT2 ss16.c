#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    FILE *fptr;

    fptr = fopen("bt01.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        exit(1);
    }

    printf("Noi dung trong file bt01.txt:\n");

    while (fgets(str, sizeof(str), fptr)) {
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
