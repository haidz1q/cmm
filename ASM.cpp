#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    int exit = 0;
    do {
        printf("----Menu----");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi chung cua 2 so\n");
        printf("3. Tinh tien quan karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("0. Thoat Chuong trinh!!!\n");
        printf("Chon (0-5): ");
        
        int choice;
        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            int so;
            int i;
            int is_prime;
            int is_square = 0;
            
            printf("nhap 1 so nguyen:");
            scanf("%d", &so);
            for (i = 2; i <= sqrt(so); i++) {
                if (so % i == 0) {
                    is_prime = 0;
                }
                if (i * i == so) {
                    is_square = 1;
                }
            }
            if (is_prime == 0) {
                printf("%d la so nguyen to\n", so);
            } else {
                printf("%d khong la so nguyen to\n", so);
            }

            if (is_square == 1) {
                printf("%d la chinh phuong\n\n\n", so);
            } else {
                printf("%d khong la chinh phuong\n", so);
            }
            printf("-----------------------------------\n");
        } 
        break;

        case 2: {
            int a, b, uoc_chung, boi_chung;
            printf("Nhap vao 2 so nguyen a va b: ");
            scanf("%d%d", &a, &b);
            for (uoc_chung = a; uoc_chung >= 1; uoc_chung--) {
                if (a % uoc_chung == 0 && b % uoc_chung == 0) {
                    printf("UCLN(%d,%d)=%d\n", a, b, uoc_chung);
                    break;
                }
            }
            for (boi_chung = a; boi_chung <= a * b; boi_chung++) {
                if (boi_chung % a == 0 && boi_chung % b == 0) {
                    printf("BCNN(%d,%d)=%d\n", a, b, boi_chung);
                }
            }
            printf("-----------------------------------\n");
        } 
        break;

        case 3: {
            int bat_dau, ket_thuc;
            printf("Nhap gio bat dau:");
            scanf("%d", &bat_dau);
            printf("Nhap gio ket thuc:");
            scanf("%d", &ket_thuc);
            int soGioHat = ket_thuc - bat_dau;
            int Tongtien = 0;
            int gioHatThem;
            int tienHatThem;
            if (soGioHat <= 3) {
                Tongtien = soGioHat * 150000;
            } else {
                gioHatThem = soGioHat - 3;
                tienHatThem = gioHatThem * 150000 * 0.7;
                Tongtien = 3 * 150000 + tienHatThem;
            }
            if (bat_dau >= 14 && bat_dau <= 17) {
                Tongtien = Tongtien * 0.9;
            }
            printf("So tien quy khach phai thanh toan la: %d VND\n", Tongtien);
            printf("-----------------------------------\n");
        } 
        break;

        case 4: {
            float kwh;
            float tiendien;
            float tt_bac1 = 1.678;
            float tt_bac2 = 1.734;
            float tt_bac3 = 2.014;
            float tt_bac4 = 2.536;
            float tt_bac5 = 2.834;
            float tt_bac6 = 2.917;
            printf("Nhap so kwh da su dung:");
            scanf("%f", &kwh);
            if (kwh <= 50) {
                float tiendien = kwh * tt_bac1;
                printf("tiendien=%f\n", tiendien);
            } else if (51 <= kwh) {
                float tiendien = 50 * tt_bac1 + ((kwh - 50) * tt_bac2);
                printf("tiendien=%f\n", tiendien);
            } else if (101 <= kwh) {
                float tiendien = 50 * tt_bac1 + (50 * tt_bac2) + ((kwh - 100) * tt_bac3);
                printf("tiendien=%f\n", tiendien);
            } else if (201 <= kwh) {
                float tiendien = 50 * tt_bac1 + (50 * tt_bac2) + (100 * tt_bac3) + ((kwh - 200) * tt_bac4);
                printf("tiendien=%f\n", tiendien);
            } else if (301 <= kwh) {
                float tiendien = 50 * tt_bac1 + (50 * tt_bac2) + (100 * tt_bac3) + (100 * tt_bac4) + ((kwh - 300) * tt_bac5);
                printf("tiendien=%f\n", tiendien);
            } else if (kwh > 400) {
                float tiendien = 50 * tt_bac1 + (50 * tt_bac2) + (100 * tt_bac3) + (100 * tt_bac4) + (100 * tt_bac5) + ((kwh - 400) * tt_bac6);
                printf("tiendien=%f\n", tiendien);
            }
            printf("-----------------------------------\n");
        } 
        break;

        case 5: {
			int tien, menh_gia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            printf("Nhap vao so tien can doi: ");
            scanf("%d", &tien);
			// doi tien 

            for (int i = 0; i < 9; i++) {
            if (tien / menh_gia[i] > 0) {
            printf("So to %d: %d\n", menh_gia[i], tien / menh_gia[i]);
            tien %= menh_gia[i];
        }
	        
        }
    }
	break;


            
        case 0: {
            exit = 1;
            printf("Ban da thoat chuong trinh!!!");
        } 
        break;
        }
    } while (exit != 1);

    return 0;
}
