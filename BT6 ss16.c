#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien *sv = (struct SinhVien*) malloc(n * sizeof(struct SinhVien));

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf("%s", sv[i].hoTen);
        printf("Tuoi: ");
        scanf("%d", &sv[i].tuoi);
        printf("So dien thoai: ");
        scanf("%s", sv[i].soDienThoai);
        printf("Email: ");
        scanf("%s", sv[i].email);
    }

    FILE *f = fopen("students.txt", "w");
    if (f == NULL) {
        printf("Khong the mo file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %d %s %s\n", sv[i].hoTen, sv[i].tuoi, sv[i].soDienThoai, sv[i].email);
    }

    fclose(f);
    free(sv);

    printf("Da luu thong tin sinh vien vao file students.txt.\n");
    return 0;
}
