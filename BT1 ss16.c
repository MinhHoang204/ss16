#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    FILE *fptr;

    fptr = fopen("bt01.txt", "w");

    printf("Nhap vao chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    printf("Ða ghi vao file bt01.txt.\n");
    return 0;
}
