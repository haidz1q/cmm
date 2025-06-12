#include <stdio.h>

int main() {
    char ten[50];
    int tuoi;
    char diaChi[100];
    int kyHoc;
    char chuyenNganh[50];

    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    while(getchar() != '\n');  // Xoa bo nho dem

    printf("Nhap dia chi: ");
    fgets(diaChi, sizeof(diaChi), stdin);

    printf("Nhap ky hoc: ");
    scanf("%d", &kyHoc);
    while(getchar() != '\n');  // Xoa bo nho dem

    printf("Nhap chuyen nganh: ");
    fgets(chuyenNganh, sizeof(chuyenNganh), stdin);

    printf("\nThong tin vua nhap:\n");
    printf("Ten: %s", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Dia chi: %s", diaChi);
    printf("Ky hoc: %d\n", kyHoc);
    printf("Chuyen nganh: %s", chuyenNganh);

    return 0;
}
