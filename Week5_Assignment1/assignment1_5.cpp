// 5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include<iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int n) {
    int missing = 1;  // Initialize the smallest missing positive element

    for (int i = 0; i < n; ++i) {
        if (arr[i] <= missing) {
            missing += arr[i];  // Update the missing value
        } else {
            break;  // If a gap is found, break the loop
        }
    }

    return missing;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input the sorted array containing only positive elements
    int arr[n];
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Find and display the smallest missing positive element
    int result = findSmallestMissingPositive(arr, n);
    cout << "The smallest missing positive element is: " << result << endl;

    return 0;
}
