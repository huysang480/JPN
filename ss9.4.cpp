#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int arr[], int *currentLength) {
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i �a %d): ", MAX_SIZE);
    scanf("%d", currentLength);

    if (*currentLength > MAX_SIZE || *currentLength < 0) {
        printf("S? ph?n t? kh�ng h?p l?! (Gi?i h?n t? 0 �?n %d)\n", MAX_SIZE);
        *currentLength = 0;
        return;
    }

    printf("Nh?p c�c ph?n t? c?a m?ng:\n");
    for (int i = 0; i < *currentLength; i++) {
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int currentLength) {
    if (currentLength == 0) {
        printf("M?ng r?ng!\n");
        return;
    }
    printf("C�c ph?n t? trong m?ng: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *currentLength) {
    if (*currentLength >= MAX_SIZE) {
        printf("M?ng �? �?y, kh�ng th? th�m ph?n t?!\n");
        return;
    }

    int value, position;
    printf("Nh?p gi� tr? c?n th�m: ");
    scanf("%d", &value);
    printf("Nh?p v? tr� c?n th�m (0 - %d): ", *currentLength);
    scanf("%d", &position);

    if (position < 0 || position > *currentLength) {
        printf("V? tr� kh�ng h?p l?! (V? tr� t? 0 �?n %d)\n", *currentLength);
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
        printf("M?ng r?ng, kh�ng c� g? �? s?a!\n");
        return;
    }

    int position, newValue;
    printf("Nh?p v? tr� c?n s?a (0 - %d): ", currentLength - 1);
    scanf("%d", &position);

    if (position < 0 || position >= currentLength) {
        printf("V? tr� kh�ng h?p l?! (V? tr� t? 0 �?n %d)\n", currentLength - 1);
        return;
    }

    printf("Nh?p gi� tr? m?i: ");
    scanf("%d", &newValue);
    arr[position] = newValue;
}

void xoaPhanTu(int arr[], int *currentLength) {
    if (*currentLength == 0) {
        printf("M?ng r?ng, kh�ng c� g? �? x�a!\n");
        return;
    }

    int position;
    printf("Nh?p v? tr� c?n x�a (0 - %d): ", *currentLength - 1);
    scanf("%d", &position);

    if (position < 0 || position >= *currentLength) {
        printf("V? tr� kh�ng h?p l?! (V? tr� t? 0 �?n %d)\n", *currentLength - 

