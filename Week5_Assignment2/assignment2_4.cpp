// 4. Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;

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

    // Calculate the sum of elements at even and odd indices
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    // Calculate and display the difference
    int difference = sumEven - sumOdd;
    cout << "The difference between the sum of elements at even indices and odd indices is: " << difference << endl;

    return 0;
}
