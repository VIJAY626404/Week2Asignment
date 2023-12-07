//2. Find the factorial of a large number.
#include<iostream>
#include<vector>
using namespace std;

// Function to multiply a number represented as a vector by an integer
void multiply(vector<int>& result, int num) {
    int carry = 0;

    for (int i = 0; i < result.size(); ++i) {
        int product = result[i] * num + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate the factorial of a number
vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }

    return result;
}

// Function to display a vector representing a large number
void display(vector<int>& num) {
    for (int i = num.size() - 1; i >= 0; --i) {
        cout << num[i];
    }
    cout << endl;
}

int main() {
    int num;

    // Input the number for which factorial is to be calculated
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the factorial and display the result
    vector<int> result = factorial(num);
    cout << "Factorial of " << num << " is: ";
    display(result);

    return 0;
}
