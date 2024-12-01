#include <stdio.h>

int main() {
    int arr[100];
    int n; 
	int pos;
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");   
    printf("Nhap vi tri can xoa (tu 0 den %d): ", n - 1);
    scanf("%d", &pos);
    if (pos >= 0 && pos < n) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else {
        printf("Vi tri khong hop le!\n");
        return 1; 
    }
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

