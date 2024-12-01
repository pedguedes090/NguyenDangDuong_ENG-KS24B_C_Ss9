#include <stdio.h>

int main() {
    int n = 5; 
    int arr[5] = {10, 20, 30, 40, 50};
	int pos, newValue;
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri can sua (0 den 4): ");
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    if (pos >= 0 && pos < n) {
        arr[pos] = newValue; 
    } else {
        printf("Vi tri khong hop le!\n");
        return 1; 
    }
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

