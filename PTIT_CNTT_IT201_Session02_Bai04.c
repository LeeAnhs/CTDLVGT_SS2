#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    int *arr;
    int newNumber;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Khong hop le\n");
        return 1; 
    }
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 || arr[i] > 100) {
            printf("Gia tri khong hop le,nhap lai\n");
            i--;
        }
    }
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &x);
    if (x < 0 || x >= n) {
        printf("Khong hop le\n");
        free(arr);
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newNumber);
    arr[x] = newNumber;
    printf("Mang sau khi sua la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}