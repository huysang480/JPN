#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int arr[], int *currentLength) {
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i ða %d): ", MAX_SIZE);
    scanf("%d", currentLength);

    if (*currentLength > MAX_SIZE || *currentLength < 0) {
        printf("S? ph?n t? không h?p l?! (Gi?i h?n t? 0 ð?n %d)\n", MAX_SIZE);
        *currentLength = 0;
        return;
    }

    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < *currentLength; i++) {
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int currentLength) {
    if (currentLength == 0) {
        printf("M?ng r?ng!\n");
        return;
    }
    printf("Các ph?n t? trong m?ng: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *currentLength) {
    if (*currentLength >= MAX_SIZE) {
        printf("M?ng ð? ð?y, không th? thêm ph?n t?!\n");
        return;
    }

    int value, position;
    printf("Nh?p giá tr? c?n thêm: ");
    scanf("%d", &value);
    printf("Nh?p v? trí c?n thêm (0 - %d): ", *currentLength);
    scanf("%d", &position);

    if (position < 0 || position > *currentLength) {
        printf("V? trí không h?p l?! (V? trí t? 0 ð?n %d)\n", *currentLength);
        return;
    }

    for (int i = *currentLength; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*currentLength)++;
}

void suaPhanTu(int arr[], int currentLength) {
    if (currentLength == 0) {
        printf("M?ng r?ng, không có g? ð? s?a!\n");
        return;
    }

    int position, newValue;
    printf("Nh?p v? trí c?n s?a (0 - %d): ", currentLength - 1);
    scanf("%d", &position);

    if (position < 0 || position >= currentLength) {
        printf("V? trí không h?p l?! (V? trí t? 0 ð?n %d)\n", currentLength - 1);
        return;
    }

    printf("Nh?p giá tr? m?i: ");
    scanf("%d", &newValue);
    arr[position] = newValue;
}

void xoaPhanTu(int arr[], int *currentLength) {
    if (*currentLength == 0) {
        printf("M?ng r?ng, không có g? ð? xóa!\n");
        return;
    }

    int position;
    printf("Nh?p v? trí c?n xóa (0 - %d): ", *currentLength - 1);
    scanf("%d", &position);

    if (position < 0 || position >= *currentLength) {
        printf("V? trí không h?p l?! (V? trí t? 0 ð?n %d)\n", *currentLength - 

