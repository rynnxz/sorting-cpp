#include <iostream>
using namespace std;

// function untuk mengganti element
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// function untuk print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}


// Main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}