#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le\n");
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
            printf("Gia tri khong hop le\n");
            i--;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}