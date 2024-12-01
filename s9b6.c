#include <stdio.h>

int main() {
    int arr[100][100];
    int rows = 0, cols = 0;
    int choice;
	do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);

                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Mang duoi dang ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int tong = 0;
                printf("Cac phan tu le: ");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            tong += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", tong);
                break;
            }
            case 4: {
                int tich = 1;
                printf("Cac phan tu tren duong bien: ");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            tich *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", tich);
                break;
            }
            case 5: {
                printf("Cac phan tu tren duong cheo chinh: ");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 6: {
                printf("Cac phan tu tren duong cheo phu: ");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;
            }
            case 7: {
                int maxSum = -1, maxRow = -1;
                for (int i = 0; i < rows; i++) {
                    int sum = 0;
                    for (int j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                    if (sum > maxSum) {
                        maxSum = sum;
                        maxRow = i;
                    }
                }
				printf("Dong co tong lon nhat: %d (Tong = %d)\n", maxRow + 1, maxSum);
                printf("Cac phan tu cua dong: ");
                for (int j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

