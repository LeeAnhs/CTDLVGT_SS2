#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
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
    printf("Nhap so can tim tong: ");
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("phan tu %d va %d co tong bang %d.\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Khong tim thay\n", target);
    }
    free(arr);
    return 0;
}