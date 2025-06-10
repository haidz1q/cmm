#include <stdio.h>

void in_lop_it_hon_30(int arr[], int n) {
    printf("Vi tri cac lop co so luong SV nho hon 30: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] < 30) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void in_lop_co_so_luong_sv_nho_nhat(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Vi tri cac lop co kich co sinh vien nho nhat la: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Moi nhap tong lop: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap mang so luong SV cac lop: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("So luong cac lop la: %d\n", n);
    
    in_lop_it_hon_30(arr, n);
    
    in_lop_co_so_luong_sv_nho_nhat(arr, n);

    return 0;
}
