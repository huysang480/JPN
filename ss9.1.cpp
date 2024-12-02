#include <stdio.h>
#define MAX_SIZE 100

void hienThiMang(int arr[], int length) {
    printf("M?ng hi?n t?i: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];    
    int currentLength = 0; 
    int n;

    printf("Nh?p s? ph?n t? mu?n nh?p (t?i ða %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n < 1) {
        printf("S? lý?ng ph?n t? không h?p l?!\n");
        return 1;
    }
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    currentLength = n;
    hienThiMang(arr, currentLength);
    int value, position;
    printf("Nh?p giá tr? c?n thêm: ");
    scanf("%d", &value);
    printf("Nh?p v? trí c?n thêm (0 - %d): ", MAX_SIZE - 1);
    scanf("%d", &position);
    if (position < 0 || position >= MAX_SIZE) {
        printf("V? trí không h?p l?!\n");
        return 1;
    }
    if (position >= currentLength) {
        arr[position] = value;
        currentLength = position + 1;
    } else {
        for (int i = currentLength; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        currentLength++;
    }
    hienThiMang(arr, currentLength);

    return 0;
}

