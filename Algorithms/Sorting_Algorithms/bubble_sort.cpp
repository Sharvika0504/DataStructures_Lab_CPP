#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[50], size;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, size);
    cout << "Sorted array: ";
    print_array(arr, size);
    return 0;
}
