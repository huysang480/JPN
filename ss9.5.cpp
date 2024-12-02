#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void nhapMang(int arr[], int *currentLength) {
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i �a %d): ", MAX_SIZE);
    scanf("%d", currentLength);

    if (*currentLength < 1 || *currentLength > MAX_SIZE) {
        printf("S? ph?n t? kh�ng h?p l?!\n");
        *currentLength = 0;
        return;
    }

    printf("Nh?p c�c ph?n t? c?a m?ng:\n");
    for (int i = 0; i < *currentLength; i++) {
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int currentLength) {
    printf("C�c ph?n t? trong m?ng: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inSoChanVaTong(int arr[], int currentLength) {
    int sum = 0;
    printf("C�c s? ch?n trong m?ng: ");
    for (int i = 0; i < currentLength; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nT?ng c�c s? ch?n: %d\n", sum);
}

void timMaxMin(int arr[], int currentLength) {
    if (currentLength == 0) {
        printf("M?ng r?ng!\n");
        return;
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < currentLength; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gi� tr? l?n nh?t: %d\n", max);
    printf("Gi� tr? nh? nh?t: %d\n", min);
}

void inSoNguyenToVaTong(int arr[], int currentLength) {
    int sum = 0;
    printf("C�c s? nguy�n t? trong m?ng: ");
    for (int i = 0; i < currentLength; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nT?ng c�c s? nguy�n t?: %d\n", sum);
}

void demSoLanXuatHien(int arr[], int currentLength) {
    int value, count = 0;
    printf("Nh?p s? c?n th?ng k�: ");
    scanf("%d", &value);

    for (int i = 0; i < currentLength; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    printf("S? %d xu?t hi?n %d l?n trong m?ng.\n", value, count);
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
        printf("V? tr� kh�ng h?p l?!\n");
        return;
    }

    for (int i = *currentLength; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*currentLength)++;
}

void menu() {
    printf("\nMENU\n");
    printf("1. Nh?p s? ph?n t? v� gi� tr? c�c ph?n t?\n");
    printf("2. In ra gi� tr? c�c ph?n t? �ang qu?n l?\n");
    printf("3. In ra gi� tr? c�c ph?n t? ch?n v� t�nh t?ng\n");
    printf("4. In ra gi� tr? l?n nh?t v� nh? nh?t trong m?ng\n");
    printf("5. In ra c�c ph?n t? l� s? nguy�n t? trong m?ng v� t�nh t?ng\n");
    printf("6. Nh?p v�o m?t s? v� th?ng k� s? l?n xu?t hi?n trong m?ng\n");
    printf("7. Th�m m?t ph?n t? v�o v? tr� ch? �?nh\n");
    printf("8. Tho�t\n");
    printf("L?a ch?n c?a b?n: ");
}

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &currentLength);
                break;
            case 2:
                hienThiMang(arr, currentLength);
                break;
            case 3:
                inSoChanVaTong(arr, currentLength);
                break;
            case 4:
                timMaxMin(arr, currentLength);
                break;
            case 5:
                inSoNguyenToVaTong(arr, currentLength);
                break;
            case 6:
                demSoLanXuatHien(arr, currentLength);
                break;
            case 7:
                themPhanTu(arr, &currentLength);
                break;
            case 8:
                printf("Tho�t ch��ng tr?nh.\n");
                break;
            default:
                printf("L?a ch?n kh�ng h?p l?!\n");
                break;
        }
    } while (choice != 8);

    return 0;
}

