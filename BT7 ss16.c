#include <stdio.h>
#include <stdlib.h>

struct Book {
    char maSach[10];
    char tenSach[50];
    char tacGia[50];
    float giaTien;
    char theLoai[20];
};

int main() {
    int n;
    printf("Nhap so luong sach: ");
    scanf("%d", &n);

    struct Book *books = (struct Book*) malloc(n * sizeof(struct Book));

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sach thu %d:\n", i + 1);
        printf("Ma sach: ");
        scanf("%s", books[i].maSach);
        printf("Ten sach: ");
        scanf("%s", books[i].tenSach);
        printf("Tac gia: ");
        scanf("%s", books[i].tacGia);
        printf("Gia tien: ");
        scanf("%f", &books[i].giaTien);
        printf("The loai: ");
        scanf("%s", books[i].theLoai);
    }

    FILE *f = fopen("books.txt", "w");
    if (f == NULL) {
        printf("Khong the mo file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %s %s %.2f %s\n", books[i].maSach, books[i].tenSach, books[i].tacGia, books[i].giaTien, books[i].theLoai);
    }

    fclose(f);
    free(books);

    printf("Da luu thong tin sach vao file books.txt.\n");
    return 0;
}
