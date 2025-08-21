#include <iostream>
#include <algorithm> // For std::reverse

using namespace std;

void reverseArray(int arr[], int size) {
    // Using the built-in reverse function
    reverse(arr, arr + size);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

