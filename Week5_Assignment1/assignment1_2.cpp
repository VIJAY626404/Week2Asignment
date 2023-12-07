// 2. Find the second largest element in the given Array in one pass
#include <iostream>
#include <climits>

int main() {
    // Declare an array
    int array[] = {3, 7, 1, 9, 5, 8};

    // Find the second largest element
    int arraySize = sizeof(array) / sizeof(array[0]);

    if (arraySize < 2) {
       std:: cout << "Array should have at least two elements." << std::endl;
        return 1; // Exit with an error code
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    // Display the result
    if (secondLargest != INT_MIN) {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second largest element in the array." << std::endl;
    }

    return 0;
}
