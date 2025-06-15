#include<stdio.h>
int main() {
    int n, i, tong = 0;
    printf("Nhap vao so nguyen n:");
    scanf("%d", &n);
    for( i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong cac so tu 1 den %d la: %d", n, tong);
    return 0;

}