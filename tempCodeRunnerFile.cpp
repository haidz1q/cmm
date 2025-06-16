#include<stdio.h>
struct ThongtinSV{
    char tenSV[50];
    int tuoi;
    char email[50];
    int soDT;
    char diachi[100];
    };
    int main() {
        struct ThongtinSV tt;
        printf("Nhap ten SV:");
        fgets(tt.tenSV, sizeof(tt.tenSV), stdin);

        printf("Nhap tuoi:");
        scanf("%d", &tt.tuoi);
        while(getchar() != '\n');

        printf("Nhap email:");
        fgets(tt.email, sizeof(tt.email), stdin);

        printf("Nhap sdtl:");
        scanf("%d", &tt.soDT);
        while(getchar() != '\n');

        printf("Nhap dia chi:");
        fgets(tt.diachi, sizeof(tt.diachi), stdin);

        printf("Ten SV:%s", tt.tenSV);
        printf("Tuoi:%d\n", tt.tuoi);
        printf("Email:%s", tt.email);
        printf("sdt:%d\n", tt.soDT);
        printf("dia chi:%s", tt.diachi);
        return 0;

        
        
    }