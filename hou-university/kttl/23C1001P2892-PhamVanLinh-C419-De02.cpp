#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai báo cấu trúc SachGiaoKhoa
struct SachGiaoKhoa {
    char MaSach[20];
    char TenSach[100];
    char NhaXB[100];
    int SoLuongBan;
    float DonGiaBan;
    float ThanhTien;
    struct SachGiaoKhoa* next;
};

// Khởi tạo con trỏ đầu danh sách
struct SachGiaoKhoa* head = NULL;

// Hàm để thêm sách giáo khoa vào DSLK Đơn
void ThemSachGiaoKhoa() {
    struct SachGiaoKhoa* newSach = (struct SachGiaoKhoa*)malloc(sizeof(struct SachGiaoKhoa));

    printf("Nhap Ma Sach: ");
    scanf("%s", newSach->MaSach);

    printf("Nhap Ten Sach: ");
    scanf("%s", newSach->TenSach);

    printf("Nhap Nha XB: ");
    scanf("%s", newSach->NhaXB);

    printf("Nhap So Luong Ban: ");
    scanf("%d", &newSach->SoLuongBan);

    printf("Nhap Don Gia Ban: ");
    scanf("%f", &newSach->DonGiaBan);

    newSach->ThanhTien = newSach->SoLuongBan * newSach->DonGiaBan;
    newSach->next = NULL;

    if (head == NULL) {
        head = newSach;
    } else {
        struct SachGiaoKhoa* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newSach;
    }
}

// Hàm để in danh sách sách giáo khoa đã nhập
void InDanhSachSach() {
    struct SachGiaoKhoa* current = head;
    while (current != NULL) {
        printf("Ma Sach: %s\n", current->MaSach);
        printf("Ten Sach: %s\n", current->TenSach);
        printf("Nha XB: %s\n", current->NhaXB);
        printf("So Luong Ban: %d\n", current->SoLuongBan);
        printf("Don Gia Ban: %.2f\n", current->DonGiaBan);
        printf("Thanh Tien: %.2f\n", current->ThanhTien);
        printf("\n");
        current = current->next;
    }
}

// Hàm để tìm sách theo tên
void TimSachTheoTen() {
    char x[100];
    printf("Nhap ten sach can tim: ");
    scanf("%s", x);
    
    struct SachGiaoKhoa* current = head;
    while (current != NULL) {
        if (strcmp(current->TenSach, x) == 0) {
            printf("Sach co ten %s tim thay:\n", x);
            printf("Ma Sach: %s\n", current->MaSach);
            printf("Ten Sach: %s\n", current->TenSach);
            printf("Nha XB: %s\n", current->NhaXB);
            printf("So Luong Ban: %d\n", current->SoLuongBan);
            printf("Don Gia Ban: %.2f\n", current->DonGiaBan);
            printf("Thanh Tien: %.2f\n", current->ThanhTien);
            return;
        }
        current = current->next;
    }
    printf("Khong tim thay sach co ten %s.\n", x);
}

void SapXepTheoThanhTien() {
    struct SachGiaoKhoa* current = head;
    struct SachGiaoKhoa* nextSach = NULL;
    struct SachGiaoKhoa* temp = NULL;

    while (current != NULL) {
        nextSach = current->next;
        while (nextSach != NULL) {
            if (current->ThanhTien < nextSach->ThanhTien) {
                // Swap ThanhTien
                temp = current;
                current = nextSach;
                nextSach = temp;
            }
            nextSach = nextSach->next;
        }
        current = current->next;
    }
}

float TinhTongThanhTien() {
    struct SachGiaoKhoa* current = head;
    float tongThanhTien = 0.0;

    while (current != NULL) {
        tongThanhTien += current->ThanhTien;
        current = current->next;
    }

    return tongThanhTien;
}

void HienThiTenSachSoLuongLonHon10() {
    struct SachGiaoKhoa* current = head;

    while (current != NULL) {
        if (current->SoLuongBan > 10) {
            printf("Ten Sach: %s\n", current->TenSach);
        }
        current = current->next;
    }
}

void TimSachSoLuongNhoNhat() {
    struct SachGiaoKhoa* current = head;
    struct SachGiaoKhoa* sachNhoNhat = current;

    while (current != NULL) {
        if (current->SoLuongBan < sachNhoNhat->SoLuongBan) {
            sachNhoNhat = current;
        }
        current = current->next;
    }

    printf("Sach co so luong nho nhat:\n");
    printf("Ten Sach: %s\n", sachNhoNhat->TenSach);
    printf("So Luong Ban: %d\n", sachNhoNhat->SoLuongBan);
}

int main() {
      int choice;
    do {
        printf("1. Them Sach Giao Khoa\n");
        printf("2. In Danh Sach Sach\n");
        printf("3. Tim Sach Theo Ten\n");
        printf("4. Sap Xep Theo Thanh Tien\n");
        printf("5. Tinh Tong Thanh Tien\n");
        printf("6. Hien Thi Ten Sach So Luong Lon Hon 10\n");
        printf("7. Tim Sach So Luong Nho Nhat\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                ThemSachGiaoKhoa();
                break;
            case 2:
                InDanhSachSach();
                break;
            case 3:
                TimSachTheoTen();
                break;
            case 4:
                SapXepTheoThanhTien();
                break;
            case 5:
                printf("Tong Thanh Tien: %.2f\n", TinhTongThanhTien());
                break;
            case 6:
                HienThiTenSachSoLuongLonHon10();
                break;
            case 7:
                TimSachSoLuongNhoNhat();
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while (choice != 0);

    // Giải phóng bộ nhớ khi kết thúc chương trình
    while (head != NULL) {
        struct SachGiaoKhoa* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}