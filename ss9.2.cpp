#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    cout << "M?ng ban �?u: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nh?p v? tr� c?n s?a (0 - " << SIZE - 1 << "): ";
    int index;
    cin >> index;

    if (index < 0 || index >= SIZE) {
        cout << "V? tr� kh�ng h?p l?!" << endl;
        return 0;
    }

    cout << "Nh?p gi� tr? m?i: ";
    int newValue;
    cin >> newValue;

    arr[index] = newValue;

    cout << "M?ng sau khi s?a: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";

