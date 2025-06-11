#include<stdio.h>
int main() {
    int n, i, tong = 0;
    printf("Nhap so n:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        tong += i;
    }
    printf("Tong s + %d la: %d", n, tong);
    return 0;
}