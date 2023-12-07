// 6. Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
#include <iostream>
using namespace std;
int main() {
int arr[5]={2,2,1,1,20};
int result = 0;

// we can use xor funtion to find unique value in array
    for (int i = 0; i < 5; ++i) {
        result ^= arr[i];
    }
cout<<"Unique element is: "<<result<<endl;
 return 0;
}