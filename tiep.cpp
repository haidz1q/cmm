#include<stdio.h>

struct ThongtinSV{
    char tenSV[50];
    int tuoi;
    char diachi[100];
    int kyhoc;
    char chuyennganh[50];
};

int main() {
    struct ThongtinSV tt;
    printf("Nhap ten SV:");
    fgets(tt.tenSV, sizeof(tt.tenSV), stdin);

    printf("Nhap tuoi:");
    scanf("%d", &tt.tuoi);
    while(getchar() != '\n');
    
    printf("Nhap dia chi:");
    fgets(tt.diachi, sizeof(tt.diachi), stdin);

    printf("Nhap ky hoc:");
    scanf("%d", &tt.kyhoc);
    while(getchar() != '\n');

    printf("Nhap chuyen nganh:");
    fgets(tt.chuyennganh, sizeof(tt.chuyennganh), stdin);

    printf("TenSV:%s\n",tt.tenSV);
    printf("Tuoi:%d\n", tt.tuoi);
    printf("Dia chi:%s\n", tt.diachi);
    printf("Ky hoc:%d\n", tt.kyhoc);
    printf("Chuyen nganh:%s\n", tt.chuyennganh);
    return 0;



    

}
    

