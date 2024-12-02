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

    printf("Nh?p s? ph?n t? mu?n nh?p (t?i �a %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n < 1) {
        printf("S? l�?ng ph?n t? kh�ng h?p l?!\n");
        return 1;
    }
    printf("Nh?p c�c ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    currentLength = n;
    hienThiMang(arr, currentLength);
    int value, position;
    printf("Nh?p gi� tr? c?n th�m: ");
    scanf("%d", &value);
    printf("Nh?p v? tr� c?n th�m (0 - %d): ", MAX_SIZE - 1);
    scanf("%d", &position);
    if (position < 0 || position >= MAX_SIZE) {
        printf("V? tr� kh�ng h?p l?!\n");
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

