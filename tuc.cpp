#include<stdio.h>

struct ThongtinSV{
    char tenSV[50];
    int tuoi;
    int soDT;
    char email[100];
    char diachi[100];
};

int main() {
    struct ThongtinSV tt;

    printf("Nhap ten SV:");
    fgets(tt.tenSV, sizeof(tt.tenSV), stdin);

    printf("Nhap tuoi SV:");
    scanf("%d", &tt.tuoi);
    while(getchar() != '\n');

    printf("Nhap sdt:");
    scanf("%d", &tt.soDT);
    while(getchar() != '\n');

    printf("Nhap email:");
    fgets(tt.email,sizeof(tt.email), stdin);

    printf("Nhap dia chi:");
    fgets(tt.diachi, sizeof(tt.diachi), stdin);

    printf("Ten SV:%s\n",tt.tenSV);
    printf("Tuoi:%d\n", tt.tuoi);
    printf("sdt:%d\n", tt.soDT);
    printf("email:%s\n", tt.email);
    printf("Dia chi:%s\n", tt.diachi);
    
    return 0;
}
