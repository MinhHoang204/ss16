#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    char str[100];
    FILE *fptr;

    fptr = fopen("bt3.txt", "w");

    if (fptr == NULL) {
        printf("Khong the tao file bt3.txt.\n");
        exit(1);
    }

    printf("Nhap su dung: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Nhap noi dung dong %d: ", i);
        scanf(" %[^\n]", str);
        fprintf(fptr, "%s\n", str);
    }

    fclose(fptr);

    fptr = fopen("bt3.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file bt3.txt.\n");
        exit(1);
    }

    printf("Noi dung trong file bt3.txt:\n");

    while (fgets(str, sizeof(str), fptr)) {
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
