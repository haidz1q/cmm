#include<stdio.h>
struct ThongtinSV{
    char tenSV[50];
    int tuoi;
    char email[50];
    int soDT;
    char diachi[100];
};
void nhapThongTinSV() {
    struct ThongtinSV tt;
    printf("Nhap ten SV:");
    fgets(tt.tenSV, sizeof(tt.tenSV), stdin);
    while(getchar() != '\n');

    printf("Nhap tuoi:");
    scanf("%d", &tt.tuoi);
    while(getchar() != '\n');

    printf("Nhap email:");
    fgets(tt.email, sizeof(tt.email), stdin);

    printf("Nhap sdt:");
    scanf("%d", &tt.soDT);
    while(getchar() != '\n');
    
    printf("Nhap dia chi:");
    fgets(tt.diachi, sizeof(tt.diachi), stdin);

    printf("Ten SV:%s", tt.tenSV);
    printf("Tuoi:%d\n", tt.tuoi);
    printf("email:%s", tt.email);
    printf("sdt:%d\n", tt.soDT);
    printf("dia chi:%s", tt.diachi);
}
void tinhTong() {
    int n, i, tong = 0, soluong = 0;
    float trungBinhCong;
    
    do {
        printf("Nhap so nguyen n:");
        scanf("%d", &n);
    }while(n <= 10);
    
    for (i = 1; i <=n; i++) {
        tong += i;
        soluong++;
    }
    
    trungBinhCong = (float)tong/soluong;
    
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    printf("Trung binh cong cac so le tu 1 den %d la: %.2f\n", n, trungBinhCong);
}

int main() {
    int choice;
    do {
        printf("\n---Menu---\n");
        printf("1.thong tin sv\n");
        printf("2.tinh tong\n");
        printf("3.thoat\n");
        printf("chon chuc nang:");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            nhapThongTinSV();
            break;
            case 2:
            tinhTong();
            break;
            case 3:
            printf("thoat chuong trinh\n");
            break;
            default:
            printf("lua chon khong hop le thu lai\n");

        }

    }while(choice != 3);
    return 0;
}



