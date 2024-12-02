#include <stdio.h>

int main() {
    int arr[100], n, position;

    printf("Nh?p s? ph?n t?: ");
    scanf("%d", &n);
    printf("Nh?p các ph?n t?:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("M?ng: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nh?p v? trí c?n xóa: ");
    scanf("%d", &position);

    if (position >= 0 && position < n) {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else {
        printf("V? trí không h?p l?!\n");
    }

    printf("M?ng sau khi xóa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

