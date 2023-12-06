#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    char str[100];
    FILE *fptr;

    fptr = fopen("bt3.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file bt3.txt.\n");
        exit(1);
    }

    printf("Noi dung trong file bt3.txt:\n");

    while (fgets(str, sizeof(str), fptr)) {
        printf("%s", str);
        count++;
    }

    printf("So dong trong file bt3.txt: %d\n", count);

    fclose(fptr);
    return 0;
}
