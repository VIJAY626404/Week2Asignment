// 3. Check if the given array is sorted or not

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;  // If any element is greater than its next element, array is not sorted
        }
    }
    return true;  // If the loop completes without returning false, array is sorted
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input the array elements
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Check and display whether the array is sorted or not
    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
